/*
12. Sum of last 3 digit .
i/p1: 9631 o/p1: 10
i/p2: 2786 o/p2: 21
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
		sum+=r;
		c++;
		if(c==3)
		 break;
	}
	printf("sum : %d\n",sum);
}
