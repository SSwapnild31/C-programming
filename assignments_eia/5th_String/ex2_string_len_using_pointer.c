#include<stdio.h>
void main()
{
	char s[20],*p;
	p=s;
	printf("Enter string : ");
	scanf("%s",s);
	
	int len;
	for(len=0;p[len];len++);
	
	printf("%d\n",len);
}
