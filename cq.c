#include<stdio.h>
#include<stdlib.h>
void insertion();
void deletion();
void display();
int f=-1,r=-1,item,size=3,a[50];
void main()
{
int opt;
do
{
printf("\nEnter your choice\n 1.insertion\n 2.deletion\n 3.display\n 4.exit\n");
scanf("%d",&opt);
printf("choice is %d\n",opt);
switch(opt)
{
case 1: insertion();
break;
case 2: deletion();
break;
case 3: display();
break;
case 4: exit(0);
break;
}
}while(opt!=4);
}
void insertion()
{
if(f==(r+1)%size)
{
printf("queue is full");
}
else
{
printf("enter the item ");
scanf("%d",&item);

if(f==-1 && r==-1)
{
f=0;
r=0;
a[r]=item;
}
else
{
r=(r+1)%size;
a[r]=item;
}
}
}
void deletion()
{
if(f==-1)
{
printf("queue empty");
}
else if(f==0 && r==0)
{
printf("The element to delete is %d",a[f]);
f=-1;
r=-1;
}
else
{
printf("The element to delete is %d",a[f]);
f=(f+1)%size;
}
}
void display()
{
int temp;
temp=f;
if(temp==-1 && r==-1)
{
printf("queue is empty");
}
else
{
printf("elements are:");
while(temp>-1)
{
printf("%d\t",a[temp]);
if(temp==r)
break;
temp=(temp+1)%size;
}
}
}

