#include<stdio.h>
void main()
{
	int num,r,rev=0;
	printf("Enter number : ");
	scanf("%d",&num);
	if(num>0)
	{	
		for(;num;num=num/10)
		{
			r=num%10;
			if(r%3==0)
			{
				r=1;
			}
			rev=rev*10+r;
		}
		for(r=0;rev;rev=rev/10)
		{
			r=rev%10;
			printf("%d",r);
		}
		printf("\n");
	}
	else
		printf("invalid input\n");
}
