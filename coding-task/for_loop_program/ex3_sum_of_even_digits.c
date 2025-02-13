#include<stdio.h>
void main()
{
	int num,sum,r;
	printf("Enter int num : ");
	scanf("%d",&num);
	
	for(sum=0;num;num=num/10)
	{
		r=num%10;
		if(r%2==0)
		sum=sum+r;
	}
	printf("sum=%d\n",sum);
}
