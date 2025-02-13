/*
14. Print last 3 digit from last .
i/p1: 96412 o/p1: 2 1 4
i/p2: 56725 o/p2: 5 2 7
*/


#include<stdio.h>
void main()
{
	int num,r,rev=0,c=0;
	printf("Enter number : ");
	scanf("%d",&num);
	
	for(;num;num=num/10)
	{
		r=num%10;
		c++;
		rev=rev*10+r;
		if(c==3)
		{
			for(r=0;rev;rev=rev/10)
			{
				r=rev%10;
				printf("%d ",r);
			}
		}
	}
	printf("\n");
}
