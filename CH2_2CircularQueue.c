#include <stdio.h>
#define size 8

struct CQ
{
    int cqueue[size];
    int rear;
    int front;
};

void initialize(struct CQ *q) {
    q->front=-1;
    q->rear=-1;    
}

int isFull(struct CQ *q){
    return (q->rear+1)%size == (q->front); 
}

int isEmpty(struct CQ *q){
    return q->front==-1;
}

void enqueue(struct CQ *q , int number) {
    if(isFull(q)){
        printf("\nCQ is Full.");
        return;
    }
    if(isEmpty(q)){
        q->front=0;
    }
    q->rear = (q->rear+1)%size;
    q->cqueue[q->rear] = number ;
    printf("%d", q->cqueue[q->rear]); 
}

void dequeue(struct CQ *q) {
    if(isEmpty(q)) {
        printf("\nCQ is Empty.");
    }
    int value = q->cqueue[q->front];
    if (q->front == q->rear) {
        q->front =-1;
    }
    q->front = (q->front+1)%size;
    printf("%d",value);   
}

int main()
{
    int choice,number;
    struct CQ *q;
    initialize(&q);

    while (1)
    {
        printf("\n1 Enqueue ");
        printf("\n2 Dequeue ");
        printf("\n3 Display ");
        printf("\nExit : ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: printf("\nEnter the Element : ");
                    scanf("%d",&number);
                    enqueue(&q,number);
                    break;
            case 2 :dequeue(&q); 
                    break;

        default:
            break;
        }
    }
}