/*
13. Sum of last 3 odd digit .
i/p1: 96312 o/p1: 13
i/p2: 57235 o/p2: 15
*/


#include<stdio.h>
void main()
{
	int num,r,c=0,sum=0;
	printf("Enter number : ");
	scanf("%d",&num);
	
	for(;num;num=num/10)
	{
		r=num%10;
		if(r%2!=0)
		{	
		 sum+=r;
		 c++;
		}
		if(c==3)
		 break;
	}
	printf("sum : %d\n",sum);
}
