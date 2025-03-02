#include<stdio.h>
void main()
{
	char ch;
	printf("Enter an char : ");
	scanf("%c",&ch);
	
	for(int i=7;i>=0;i--)
		printf("%d",ch>>i&1);
	printf("\n");
}
