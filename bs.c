#include<stdio.h>
#include<string.h>
void intersection(char*,char*,char*);
void unionn(char*,char*,char*);
void difference(char*,char*,char*);
void main()
{
	char s1[20],s2[20],s3[20];
	int l,i;
	printf("Enter the string s1= ");
	scanf("%s",s1);
	printf("Enter the string s2= ");
	scanf("%s",s2);
	unionn(s1,s2,s3);
	printf("union is:%s\n",s3);
	intersection(s1,s2,s3);
	printf("intersection is:%s\n",s3);
	difference(s1,s2,s3);
	printf("difference is:%s\n",s3);
}
void intersection(char*s1,char*s2,char*s3)
{
	int l,i;
	l=strlen(s1);

	for(i=0;i<l;i++)
	{
		if(s1[i]=='1' && s2[i]=='1')
		{
			s3[i]='1';
		}
		else
		{
			s3[i]='0';
		}
	}
	
}	
void unionn(char*s1,char*s2,char*s3)
{
	int l,i;
	l=strlen(s1);
	for(i=0;i<l;i++)
	{
		if(s1[i]=='0' && s2[i]=='0')
		{
			s3[i]='0';
		}
		else
		{
			s3[i]='1';
		}
	}
	s3[i]='\0';

}	
void difference(char*s1,char*s2,char*s3)
{
	int l,i;
	l=strlen(s1);
	for(i=0;i<l;i++)
	{
		if(s1[i]=='1' && s2[i]=='0')
		{
			s3[i]='1';
		}
		else
		{
			s3[i]='0';
		}
	}
}	
	
	
