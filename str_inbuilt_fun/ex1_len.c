#include<stdio.h>
#include<string.h>
void main()
{
	char s[20];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	int len;
	len=strlen(s);
	printf("string of len is %d\n",len);
}
