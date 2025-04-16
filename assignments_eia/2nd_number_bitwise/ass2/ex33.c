#include<stdio.h>

void main()
{
	int num,sum,r;
	printf("Enter num : ");
	scanf("%d",&num);
	
	for(sum=0;num;num/=10)
	{
		r=num%10;
		if(r%2==0)
		{
			sum=sum*10+r;
		}
	}

	while(sum)
	{
		r=sum%10;
		num=num*10+r;
		sum/=10;
	}
	printf("%d\n",num);
}
