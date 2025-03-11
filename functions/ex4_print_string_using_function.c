#include<stdio.h>
void print(const char *);
void main()
{
	char s[10];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	print(s);
}
void print(const char *p)
{
	printf("%s\n",p);
}
