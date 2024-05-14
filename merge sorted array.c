#include<stdio.h>
void main()
{
    int a[20],b[20],c[40],i,j,k,n1,n2;
    printf("enter the siz of 1st array :");
    scanf("%d",&n1);
    printf("Enter te array element :");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the siz of 2nd array :");
    scanf("%d",&n2);
    printf("Enter te array element :");
    for(j=0;j<n2;j++)
    {
        scanf("%d",&b[j]);
    }
    i=0;j=0;k=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else if(a[i]>b[j])
        {
            c[k]=b[j];
            j++;
            k++;
        }
        else
        {
            c[k]=a[i];
            i++;
            j++;
            k++;
        }
    }
        while(i<n1)
        {
            c[k]=a[i];
            i++;
            k++;
        }
        while(j<n2)
        {
           c[k]=b[j];
           j++;
           k++;
        }
     printf("The aray is ::::::");
     for(i=0;i<k;i++)
     {
         printf("%d\t",c[i]);
     }
}