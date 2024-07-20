/*
 * Stack1.c
 *
 *  Created on: 20 Jul 2024
 *      Author: ABHISHEK
 */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define STACKSIZE 100
struct stack
{
	int top;
	int items[STACKSIZE];
};
int empty(struct stack *ps)
{
	if(ps->top==-1)
	{
		//return;
		//printf("Stack is empty");
		return 1;
	}
	else
	{
		//printf("\nStack is not empty");
		return 0;
	}

}
int pop(struct stack *ps)
{
	if(empty(ps))
	{
		printf("\nStack underflow");
		exit(1);
	}
	else
	{
		return ps->items[ps->top];
		//return ps->top--;
	}

}
void push(struct stack *ps,int x)
{
	ps->items[(ps->top)]=x;
	ps->top++;
	return;
}
int main()
{
	struct stack s;
	int a=-1;
	int b;

	while(a==-1)
	{
		printf("\nEnter option\n1 Push \n2 Pop \n3 Exit");
		scanf("%d",&b);
	   switch(b)
	   {
	   case 1:
		   int x;
		   printf("\nEnter element to store in stack :");
		   scanf("%d",&x);
		   push(&s,x);
		   break;
	   case 2:
		   int a1;
		   a1=pop(&s);
		   printf("\nElement poped = %d",a1);
		   s.top--;
		   break;
	   case 3:
		   exit(0);
	   }
	}
	getch();
	return 0;
}
