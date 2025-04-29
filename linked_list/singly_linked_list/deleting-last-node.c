#include<stdio.h>
#include<stdlib.h>

// node creation 
struct node
{
    int data ;
    struct node* next ;

};

// deleting the last element 

struct node* deletelast(struct node*head ){
    
    int i ;

    struct node* p = head ;
    struct node* q = head->next ;

    while(q->next != NULL){
       p =  p -> next ;
       q =  q -> next ;
    }
    

    p -> next = NULL ;

    free(q);
      
    return head ; 
   
    
}
// printing the elements of linked list 
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
    
    head = deletelast(head );
    printf("linked list after deletin \n");
    
    print(head);
    
    return 0 ;
}
