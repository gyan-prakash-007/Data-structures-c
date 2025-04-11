#include<stdio.h>
#include<stdlib.h>



struct stack
{
    int size ;
    int top ;
    int * arr ;
};

// function to check if the stack is empty or not.
int isEmpty(struct stack* ptr){
    if(ptr->top== -1){
        return 1;
    }
    else {
        return 0 ;
    }
}

// function to check if the stack is full or not
int isFull(struct stack* ptr){
    if(ptr->top== ptr->size - 1){
        return 1;
    }

    else {
        return 0 ;
    }

}

// function to push an element 
void push(struct stack* ptr, int val){

    if (isFull(ptr))
    {
        printf("stack overflow \n");
    }
    else{
        ptr -> top++;
        ptr -> arr[ptr->top]= val;
    }
    
}
 

// function to peek an element
    int peek(struct stack* sp,  int i){
        int arrInd =  sp-> top - i +1;

        if(arrInd < 0){
            printf("not a valid positon for the stack \n");
            return -1 ;
        }

        else{
            return sp -> arr[arrInd];
        }
    }
    
    //functon to pop an elemment 

    int pop(struct stack* ptr){
        if(isEmpty(ptr)){
            printf("stack underflow");
           
            return -1 ;
        }
    
        else{
            int val = ptr -> arr[ptr -> top];
            ptr -> top--;
            return val ;
        }
    }

int main(){
    struct stack *sp = (struct stack*) malloc(sizeof(struct stack));
    sp-> size = 10;
    sp-> top = -1 ;
    sp-> arr = (int*)malloc(sp->size*sizeof(int));

    printf("before pushing , full : %d\n", isFull(sp));
    printf("before pushing , empty : %d\n", isEmpty(sp));

    // Pushing elements into the stack
    push(sp , 1102);
    push(sp , 5098);
    push(sp , 56345);
    push(sp , 56454);
    push(sp , 5600);
    push(sp , 6756);
    push(sp , 5611);
    push(sp , 5667);
    push(sp , 226);
    push(sp , 36);
    

    printf(" after pushing , full :%d\n", isFull(sp));
    printf("after pushing , empty : %d\n", isEmpty(sp));

   
for (int  j = 0; j < sp -> top +1; j++)
{
    printf("the value at position %d is %d \n", j , peek(sp,j+1));
}

printf(" popped %d from the stack\n  " , pop(sp));

 return 0 ;
}
