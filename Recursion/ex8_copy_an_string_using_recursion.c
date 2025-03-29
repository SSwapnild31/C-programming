#include<stdio.h>

void copy(char *,char *);
void main()
{
	char s[20],d[20];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	printf("Before : %s\n",d);
	copy(d,s);
	printf("After : %s\n",d);
}

void copy(char *d,char *s)
{
	if(*s)
	{
		*d=*s;
		copy(d+1,s+1);
	}
	else
		*d=*s;
}
