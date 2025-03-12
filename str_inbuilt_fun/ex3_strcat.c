#include<stdio.h>
#include<string.h>
void main()
{
	char s[10],d[10],d1[10];
	printf("Enter two string :\n");
	scanf("%s%s",s,d);
	
	printf("%s\n",strcat(d,s));
	printf("%s\n",strncat(d1,s,4));
}
