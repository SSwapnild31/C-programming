#include<stdio.h>
void main()
{
	int num,i,n1,n2,n3;
	printf("Enter int number : ");
	scanf("%d",&num);
	
	printf("Before swap : ");
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);
		i%4==0 ? printf(" ") : 0 ;
	}
	printf("\n");
	///////////////////////
	
	n1=num&0x0000000F;
	n1=n1<<8;
	n2=num&0x00000F00;
	n2=n2>>8;
	n3=num&0xFFFFF0F0;
	num = n1 | n2 | n3;
	
	///////////////////////
	printf("After swap : ");
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);
		i%4==0 ? printf(" ") : 0 ;
	}
	printf("\n");
}
