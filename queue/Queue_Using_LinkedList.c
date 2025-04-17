#include <stdio.h>
#include <stdlib.h>

// Queue using linked list

struct node *f = NULL;
struct node *r = NULL;

struct node
{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node* ptr){
printf("printing the elements of lined list \n");
    while(ptr!=NULL){
        printf("element is %d\n",ptr->data);
        ptr=ptr->next;
    }
}
void enqueue( int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    // is full condition
    if (n == NULL)
    {
        printf("queue is full\n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r=n;
        }
    }
}

int dequeue(){
int val = -1;
struct node* ptr = f;
if (f==NULL)
{
    printf("queue is empty\n");
    return - 1;
}

else{
    f =  f->next;
    val = ptr->data;
    free(ptr);


}
return val;

}

int main()
{
    
    printf("dequeuing element %d\n",dequeue());
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    
    linkedListTraversal(f);
    printf("dequeuing element %d\n",dequeue());

    return 0;
}
