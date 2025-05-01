#include<stdio.h>

void my_strchr(char *,char);
void delete(char *,char *);
void main()
{
	char s[10],ch;
	printf("Enter string : ");
	scanf(" %s",s);
	printf("Enter char : ");
	scanf(" %c",&ch);
	
	my_strchr(s,ch);
	
	printf("%s\n",s);
}

void my_strchr(char *p,char ch)
{
	while(*p)
	{
		if(*p==ch)
			delete(p,p+1);
		p++;
	}
}

void delete(char *s,char *q)
{
	while(*s++=*q++);
}
