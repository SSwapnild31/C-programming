#include<stdio.h>
void main()
{
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	
	num&7 ? printf("yes\n") : printf("no\n");
}
