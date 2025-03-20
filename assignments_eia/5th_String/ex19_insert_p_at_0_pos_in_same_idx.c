#include<stdio.h>

void main()
{
	char s[10],ch;
	printf("Enter string : ");
	scanf("%s",s);
	printf("Enter char : ");
	scanf(" %c",&ch);
	int i,len;
	for(len=0;s[len];len++);
	for(i=len-1;s[i];i--)
		s[i+1]=s[i];
	s[0]=ch;

	printf("%s\n",s);
}
