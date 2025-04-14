#include<stdio.h>
#include<stdlib.h>
//multiple parenthesis 
struct stack
{
    int size ;
    int top ;
    char * arr ;
};

int isEmpty(struct stack* ptr){
    if(ptr->top== -1){
        return 1;
    }

    else {
        return 0 ;
    }
}

int isFull(struct stack* ptr){
    if(ptr->top== ptr->size - 1){
        return 1;
    }

    else {
        return 0 ;
    }

}

void push(struct stack* ptr, char val){

    if (isFull(ptr))
    {
        printf("stack overflow \n");
    }
    else{
        ptr -> top++;
        ptr -> arr[ptr->top]= val;
    }
    
}

char pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("stack underflow");
       
        return -1 ;
    }

    else{
        char val = ptr -> arr[ptr -> top];
        ptr -> top--;
        return val ;
    }

}
int match(char a , char b){
    if(a=='{'&& b=='}'){
        return 1;
    }
    if(a=='('&& b==')'){
        return 1;
    }
    if(a=='['&& b==']'){
        return 1;
    }
    return 0;
}

int parenthesis_matching(char * exp ){
 int i ;
 
 struct stack *sp = (struct stack*) malloc(sizeof(struct stack));
 sp-> size = 100;
 sp-> top = -1 ;
 sp-> arr = (char*)malloc(sp->size*sizeof(char));
 char pop_ch ;
    for(int i = 0 ; exp[i]!='\0'; i++){
        if(exp[i]=='(' || exp[i]=='['||exp[i]=='{'){
            push(sp,exp[i]);
          
        }
        else if(exp[i]==')' || exp[i]==']'||exp[i]=='}'){
            if(isEmpty(sp)){
                return 0 ;
            }
            pop_ch = pop(sp);
            if(!match( pop_ch, exp[i])){
                return 0 ;
            }
        }
    }
    if(isEmpty(sp)){
        return 1 ;
    }
    else {
        return 0 ;
    }
}
int main(){
     char* exp ="8*{(8+0)+1}";
   

    if(parenthesis_matching(exp))
          {
            printf(" the parenthesis is balanced");
          } 
     else{
            printf("the parenthesis is not balanced");
         }
return 0 ; 
}
