#include<stdio.h>
#include<string.h>
void main()
{
	char s[20],s2[20];
	printf("Enter string and substring : ");
	scanf("%s %s",s,s2);
	
	printf("%s\n",strstr(s,s2));
}
