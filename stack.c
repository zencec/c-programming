#include<stdio.h>
#define MAX 10
int stack[MAX];
int top=-1;

void push(int item){
if(top==MAX-1){
printf("The Stack Overflow /n");
return;
}
stack[++top]=item;
printf("\n %d is pushed to stack\n",item);
}

void pop(){
if(top==-1){
printf("\n the stack Underflow \n");
return;
}
printf("The popped  item is %d",stack[top--]);
}

void peek(){if(top==-1){
printf("The Stack is empty \n");
return;
}
printf("\n The top element is : %d\n",stack[top]);
}

void display(){
if(top==-1){
printf("The stack is empty");
return;
}
for(int i=top;i>=0;i--){
printf("%d \t",stack[i]);
}
}

void main(){
int choice,value;
while(1){
printf("The Stack Operations are:");
printf("\n 1. PUSH");
printf("\n 2. POP");
printf("\n 3. PEEK");
printf("\n 4. DISPLAY");
printf("\n 5. EXIT");
printf("\n Enter Your Choice :");
scanf("%d",&choice);
switch(choice){
case 1:
printf("\n Enter the value to push:");
scanf("%d",&value);
push(value);
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
printf("\n Exiting the program");
return;
default:
printf("\n Invalid Choice");

}
}
}


