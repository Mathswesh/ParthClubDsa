#include<stdio.h>'
#define MAX 5

int queue[MAX];
int front = -1; //deleting element
int rear = -1; //storing element

int isFull(){
    return (rear == MAX-1) ;
}

int isEmpty(){
    return (front==-1);
}

void enqueue(int value){
    if (isFull())
    {
        rear=MAX-1;
        printf("\nOverflow");
    }
    else if(isEmpty()){
        front=0;
        rear=0;
        queue[rear]= value;
        printf("\nElement is : %d",queue[rear]);
    }else{
        rear=rear+1;
        queue[rear]= value;
        printf("\nElement is : %d",queue[rear]);
    }
}
void dequeue(){
    if (isEmpty()){
        printf("\nUnderflow");
        return ;
    }
    // reset
    if(front == rear){
        rear=-1; 
        front=-1;
    }
    else{
        printf("\ndeleted element is %d",queue[front]);
        front++;
    }
}

void display(){
    if(isEmpty()){
        printf("\nNothing !");
    }
    else{
        for (int i = front; i <= rear; i++)
        {
            printf("\t%d ",queue[i]);
        }
    }
}
int main(){

    int choice;
    int value;

    while (1)
    {
        printf("\n1 Enqueue ");
        printf("\n2 Dequeue ");
        printf("\n3 Display ");
        printf("\n4 Exit ");
        printf("\nEnter the Number : ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1: printf("\nEnter the value : ");
                    scanf("%d",&value);
                    enqueue(value);
                    break;
            case 2: dequeue();
                    break;    
            case 3: display();
                    break;
            // default: exit(1);
        }
    }
    return 0;
}