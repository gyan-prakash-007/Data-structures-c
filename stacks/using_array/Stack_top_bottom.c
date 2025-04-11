#include<stdio.h>
#include<stdlib.h>

// Defining the stack structure
struct stack {
    int size;   
    int top;  
    int *arr;   
};

// Function to check if the stack is empty
int isEmpty(struct stack* ptr) {
    if (ptr->top == -1) {
        return 1;  // Stack is empty
    } else {
        return 0;  // Stack is not empty
    }
}

// Function to check if the stack is full
int isFull(struct stack* ptr) {
    if (ptr->top == ptr->size - 1) {
        return 1;  // Stack is full
    } else {
        return 0;  // Stack is not full
    }
}

// Function to push an element onto the stack
void push(struct stack* ptr, int val) {
    if (isFull(ptr)) {
        printf("Stack overflow\n");  
    } else {
        ptr->top++;                 
        ptr->arr[ptr->top] = val;   
    }
}

// Function to return the top element of the stack
int stackTop(struct stack* sp) {
    return sp->arr[sp->top];
}

// Function to return the bottom element of the stack
int stackBottom(struct stack* sp) {
    return sp->arr[0];
}

int main() {
    // Dynamically allocating memory for the stack
    struct stack *sp = (struct stack*) malloc(sizeof(struct stack));
    sp->size = 10;                    
    sp->top = -1;                     
    sp->arr = (int*)malloc(sp->size * sizeof(int));  // Allocating memory for array

    
    printf("Before pushing, is full: %d\n", isFull(sp));
    printf("Before pushing, is empty: %d\n", isEmpty(sp));

    // Pushing elements into the stack
    push(sp, 1102);
    push(sp, 5098);
    push(sp, 56345);
    push(sp, 56454);
    push(sp, 5600);
    push(sp, 6756);
    push(sp, 5611);
    push(sp, 5667);
    push(sp, 226);
    push(sp, 36);   

    
    printf("After pushing, is full: %d\n", isFull(sp));
    printf("After pushing, is empty: %d\n", isEmpty(sp));

    // Displaying top and bottom elements of the stack
    printf("Stack top: %d\n", stackTop(sp));
    printf("Stack bottom: %d\n", stackBottom(sp));

    return 0;
}
