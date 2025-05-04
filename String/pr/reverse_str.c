#include<stdio.h>
#include<stdlib.h>

void strrev(char *);
void main()
{
	char *s=malloc(25);
	
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	printf("Before : %s\n",s);
	
	strrev(s);
	
	printf("After : %s\n",s);
}



void strrev(char *p)
{
	char *q=p;
	
	while(*q)
		q++;
	q--;
	
	while(p<q)
	{
		char t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
}
