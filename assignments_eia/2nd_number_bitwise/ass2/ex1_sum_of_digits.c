#include<stdio.h>

void main()
{
	int num,sum,r;
	printf("Enter number : ");
	scanf("%d",&num);
	
	for(sum=0;num;num/=10)
	{
		r=num%10;
		sum=sum+r;
	}
	printf("sum=%d\n",sum);
}
