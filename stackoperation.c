#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(int value) {
if (top == MAX-1){
printf("Stack overflow! cannot push %d\n",value);
}
else
{
stack[++top]=value;
printf("%d pushed to stack\n",value);
}
}
void pop() {
if(top == -1){
printf("Stack underflow! cannot pop\n");
}
else
{
printf("%d poped from stack \n",stack[top--]);
}
}
void display() {
if(top== -1) {
printf("Stack is empty\n");
}
else
{
printf("Stack element:");
for(int i=top;i>=0;i--) {
printf("%d",stack[i]);
}
printf("\n");
}
}
int main() {
int choice,value;
while(1) {
printf("\n --stackmenu --\n");
printf("1.push\n2.pop\n3.Display\n4.Exit\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice) {
case 1:
  printf("Enter value to push:");
  scanf("%d",&value);
  push(value);
  break;
case 2: 
   pop();
   break;
case 3:
   display();
   break;
case 4:
    return 0;
default:
printf("invalid choice! Try again.\n");
}
}
 }        
