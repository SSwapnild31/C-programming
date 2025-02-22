#include<stdio.h>
void main()
{
	short int num;
	printf("Enter short int num : ");
	scanf("%hd",&num);
	
	printf("before nibble swap : \n");
	for(int i=15;i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%4==0)
			printf(" ");
	}
	printf("\n");
	
	short int a,b,r1,r2,r3;
	a=num&0xF000;
	r1=a>>12;
	b=num&0x000F;
	r2=b<<12;
	r3=num&0x0FF0;
	num = r1 | r2 | r3;
	
	printf("After nibble swap : \n");
	for(int i=15;i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%4==0)
			printf(" ");
	}
	printf("\n");
	
}
