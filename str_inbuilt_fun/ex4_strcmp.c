#include<stdio.h>
#include<string.h>

void main()
{
	char s1[10],s2[10];
	
	printf("Enter 2 strings : ");
	scanf("%s%s",s1,s2);
	
	printf("%d\n",strcmp(s1,s2));
	printf("%d\n",strncmp(s1,s2,2));
}
