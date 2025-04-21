#include<stdio.h>

enum colour{red,green,blue};

void main()
{
	int ip;
	
	printf("Enter ip : ");
	scanf("%d",&ip);
	
	if(ip==red)
		printf("red\n");
	else if(ip==green)
		printf("green\n");
	else
		printf("blue\n");
}
