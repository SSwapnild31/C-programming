#include<stdio.h>

void main()
{
	char s[10];
	printf("Enter string : ");
	scanf("%s",s);
	
	int i,len;
	for(len=0;s[len];len++);
	for(i=len-1;s[i];i--)
		s[i+2]=s[i];
	s[0]='p';
	s[1]='q';
	
	printf("%s\n",s);
}
