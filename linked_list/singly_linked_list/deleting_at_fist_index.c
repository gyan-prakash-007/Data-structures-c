#include<stdio.h>
#include<stdlib.h>

//node creation 
struct node
{
    int data ;
    struct node* next ;

};

// deleting the element at a given index 

struct node* deleteIndex(struct node*head , int index ){
    
    int i ;

    struct node* p = head ;
    struct node* q = head-> next;
    
    for ( i = 0 ; i < index-1 ; i ++ ){
        p = p-> next ;
        q = q-> next ;
    }

    p -> next = q -> next ;

    free(q);
      
    return head ; 
   
    
}
void print(struct node* head){
    while(head!=NULL){
        printf("%d\t",head->data);
        head = head->next;
    }
  printf("\n");
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *forth;
    
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third =  (struct node*)malloc(sizeof(struct node));
    forth = (struct node*)malloc(sizeof(struct node));

    head ->data = 3 ;
    head-> next = second;
    second -> data = 4;
    second->next = third;
    third -> data = 5;
    third->next = forth;
    forth -> data = 6;
    forth->next = NULL;
    
    printf(" linked list before deletion \n");
    print(head);
    
    head = deleteIndex(head , 1 );
    printf("lined list after deletin \n");
    
    print(head);
    
    return 0 ;
}
