#include<stdio.h>
#include<stdlib.h>

void main()
{
	char *p;
	
	p=malloc(sizeof(char)*10);
	
	printf("Enter 9 bytes string : ");
	scanf("%s",p);
	
	printf("%s\n",p);
}
