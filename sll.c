#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
	int data;
	struct node *next;
};
struct node *top=NULL;
void main()
{
	int opt;
	do
	{
	printf("enter your option\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
	scanf("%d",&opt);
	
	switch(opt)
	{
	case 1:
	push();
	break;
	case 2:
	pop();
	break;
	case 3:
	display();
	break;
	case 4:
	exit(0);
	break;
	}
	}
	while(opt<=4);
}
void push()
{	
	struct node *new=NULL;

	new=(struct node*)malloc(sizeof(struct node));
	if(new==NULL)
	{
	printf("\t insufficient data\n");
	}
	else
	{	
	printf("enter the data to be inserted :");
	scanf("%d",&new->data);
	
	new->next=top;
	top=new;
	}
}
void pop()
{	
	struct node *ptr;	
	if(top==NULL)
	{
	printf("\t stack underflow...\n");
	}	
	else
	{
	printf("The data to be poped %d\n",top->data);
	ptr=top;	
	top=top->next;
	free(ptr);
	}
	
}
void display()
{	struct node *ptr1;
	ptr1=top;
	if(ptr1==NULL)
	{
	printf("\t stack underflow\n");
	}
	else
	printf("\t the stack is\n");
	while(ptr1!=NULL)
	{
	printf("%d\n",ptr1->data);
	ptr1=ptr1->next;
	}
	
}



	
	
