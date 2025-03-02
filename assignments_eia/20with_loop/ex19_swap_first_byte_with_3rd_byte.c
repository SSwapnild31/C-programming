#include<stdio.h>
void main()
{
	int num,i,n1,n2,n3;
	printf("Enter number : ");
	scanf("%d",&num);
	
	printf("Before Swap : ");
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%8==0)
			printf(" ");
	}
	printf("\n");
	
	n1=num&0x000000FF;
	n1=n1<<16;
	n2=num&0x00FF0000;
	n2=n2>>16;
	n3=num&0xFF00FF00;
	
	num = n1 | n2 | n3;

	printf("After Swap : ");
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%8==0)
			printf(" ");
	}
	printf("\n");
}
