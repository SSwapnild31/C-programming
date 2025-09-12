#include<stdio.h>

int main()
{
	int num,pos;
	printf("Enter number : ");
	scanf("%d",&num);
	printf("Enter pos : ");
	scanf("%d",&pos);
	
	for(int i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");

	num = num^1<<pos;
	
	for(int i=31;i>=0;i--)
		printf("%d",num>>i&1);	
	printf("\n");

	return 0;
}
