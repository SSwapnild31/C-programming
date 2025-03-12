#include<stdio.h>
#include<string.h>

void print(const char *);
void main()
{
	char s[10],d[10],d1[10];
	printf("Enter string : ");
	scanf("%s",s);
	
	//print(d);
	printf("%s\n",strcpy(d,s));
	printf("%s\n",strncpy(d1,s,2));
	//print(d);
}
void print(const char *p)
{
	printf("%s\n",p);
}
