#include<stdio.h>
#include<string.h>
void main()
{
	char s[10],ch;
	printf("Enter string and char : ");
	scanf("%s %c",s,&ch);
	
	printf("%s\n",strchr(s,ch));
	printf("%s\n",strrchr(s,ch));
	
}
