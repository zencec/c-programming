#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *link;
};
struct node *top = NULL;
void push()
{
	struct node *newnode;
	newnode = (struct node*) malloc(sizeof(struct node));
	if(newnode == NULL) {
		printf("\n No space Available \n");
		return;
	}
	newnode->link = NULL;
	printf("\n Enter the element to insert:");
	scanf("%d", &newnode->data);s
	if(top == NULL) {
		top = newnode;
	}
	else {
		newnode->link = top;
		top = newnode;
	}
	printf("\n %d inserted successfully",newnode->data);
}

void pop()
{
	struct node *temp = top;
	if(top == NULL) {
		printf("\n Stack Underflow \n");
		return;
	}
	printf("\n %d is popped",temp->data);
	top = temp->link;
	free(temp);
}

void peek() {

	struct node *temp = top;
	if(top == NULL) {
		printf("\n Stack Underflow");
		return;
	}
	printf("Top Element is %d",temp -> data);
}
void display() {
	struct node *temp = top;
	if(top == NULL) {
		printf("\n List is empty");
		return;
	}
	printf("\n Elements in the stack are: \n");
	while(temp != NULL) {
		printf("%d \n",temp->data);
		temp=temp->link;
	}
}

void search () {
	struct node *temp = top;
	int found = 0,key;
	if(top == NULL) {
		printf("\n stack underflow \n");
		return;
	}
	printf("\n Enter the value to search");
	scanf("%d",&key);
	while(temp != NULL) {
		if(temp->data == key) {
			printf("%d element founded\n",temp->data);
			found = 1;
		}
		temp=temp->link;
	}
	if(!found) {
		printf("value %d not exist in the stack",key);
	}
}


void main() {
	int choice;

	do {
		printf("\n ****** Stack *****\n");
		printf("\n 1->push() \n 2->pop() \n3->peek() \n4->Display \n 5->Search \n 6->exit");
		printf("\n Enter Choice :");
		scanf("%d",&choice);
		switch(choice) {

		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			peek();
			break;
		case 4:
			display();
			break;
		case 5:
			search();
			break;
		case 6:
			printf("\n Exit \n");
			break;
		default:
			printf("\n Invalid Choice \n");
		}
	} while(choice != 6);
}



