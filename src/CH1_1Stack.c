#include<stdio.h>

int stack[5];
int top = -1;

void push();
void display();
void pop();

void main () {
	while(1){
		int choice;
		printf("\n----------\n");
		printf("\n1 Push");
		printf("\n2 Pop");
		printf("\n3 Display\n");
		scanf("%d",&choice);
		switch(choice){
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			default : exit(1);
		}
	}
}
void push(){
	int item;
	if(top>4){
		printf("\nOverflow");
	}
	else{
		printf("\nEnter the number : ");
		scanf("%d",&item);
		top=top+1;
		stack[top] = item;
	}
	printf("element added %d",item);
}
void display(){
	int i;
	for(i=top;i>-1;i--){
		printf("%d\n",stack[i]);
	}
}
void pop(){
	int item;
	if(top<0){
		printf("\nUnderflow");
	}
	else{
		item = stack[top];
		top=top-1;
		printf("\n%d deleted item is.",item);
	}
}