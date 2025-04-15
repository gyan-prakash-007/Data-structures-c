#include <stdio.h>
#include <stdlib.h>

struct Circularqueue {
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct Circularqueue *q) {
    if (((q->r+1) % q ->size)== q->f) {
        return 1;
    } else {
        return 0;
    }
}

int isEmpty(struct Circularqueue *q) {
    if (q->r == q->f) {
        return 1;
    } else {
        return 0;
    }
}

void enqueue(struct Circularqueue *q, int val) {
    if (isFull(q)) {
        printf("This queue is full\n");
    } else {
        q->r=(q->r+1)%q->size;
        q->arr[q->r] = val;
    }
}

int dequeue(struct Circularqueue *q) {
    int a = -1;
    if (isEmpty(q)) {
        printf("Queue is empty\n");
    } else {
        q->f=(q->f+1)%q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main() {
    struct Circularqueue q;
    q.size = 5;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    if (isEmpty(&q)) {
        printf("Queue is empty\n");
    }

    // Enqueue a few terms
    enqueue(&q, 12);
    enqueue(&q, 125);
    enqueue(&q, 16);
    enqueue(&q, 5);

    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));

    enqueue(&q,45);
    printf("Dequeuing element %d\n", dequeue(&q));

    if (isEmpty(&q)) {
        printf("Queue is empty\n");
    }

    if (isFull(&q)) {
        printf("Queue is full\n");
    }

  
    return 0;
}

