#include<stdio.h>
#include<string.h>

void main()
{
	char s[50],ch;
	printf("Enter string : ");
	scanf("%[^\n]",s);
	printf("Enter char : ");
	scanf(" %c",&ch);
	
	char *p,*q;
	p=s;
	
	printf("before : %s\n",s);
	while(q=strchr(p,ch))
		strcpy(q,q+1);
	
	printf("after : %s\n",s);
}
