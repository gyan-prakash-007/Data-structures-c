
#include<stdio.h>
#include<stdlib.h>

// inserting at first

struct node
{
    int data ; 
    struct node* next ;
};

void linedListTraersal(struct node* head) {

    struct node* ptr = head ;
       
       do{
        printf("element is %d\n", ptr -> data);
        ptr = ptr -> next ;
    } while(ptr != head);

}

struct node* insertAtFirst(struct node * head , int data){
    struct node* ptr = (struct node* )malloc(sizeof(struct node));
    
    ptr -> data = data ;
    struct node *p = head -> next ;
     
    while(p-> next != head){
        p = p->next ;
    }

    p-> next = ptr;
    ptr->next = head ;
    head = ptr ;
    
    return head ;
}

int main(){
    
    struct node *head ;
    struct node *second ;
    struct node *third ;
    struct node *forth ;
   
    head =  (struct node*)malloc(sizeof(struct node));
    second =  (struct node*)malloc(sizeof(struct node));
    third =  (struct node*)malloc(sizeof(struct node));
    forth =  (struct node*)malloc(sizeof(struct node));

    head -> data = 1;
    head -> next = second ; 

    second -> data = 9;
    second  -> next = third  ; 

    third -> data = 7;
    third -> next = forth ; 

    forth -> data = 2;
    forth-> next = head ; 


    printf(" the linked list before insertion is \n");
    
    linedListTraersal(head);

    printf("the lined list after insertion is \n");

    head = insertAtFirst(head ,50);

    linedListTraersal(head);
 

    return 0 ;
}
