#include<stdio.h>
void main()
{
	int num,r,sum=0;
	printf("Enter 3 digit num : ");
	scanf("%d",&num);
	
	if(num>=100 && num<=999)
	{
		r=num%10;
		num=num/10;
		sum=sum+r;
		r=num%10;
		num=num/10;
		sum=sum+r;
		sum=sum+num;
		printf("sum : %d\n",sum);
	}
	else
		printf("invalid number..\n");
}
