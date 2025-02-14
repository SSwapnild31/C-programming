#include<stdio.h>
void main()
{
	int num,r,sum=0;
	printf("Enter 2 digit num : ");
	scanf("%d",&num);
	
	if(num>=10 && num<=99)
	{
		r=num%10;
		num=num/10;
		sum=r+num;
		printf("sum : %d\n",sum);	
	}
	else
	{
		printf("invalid input..\n");
	}
}
