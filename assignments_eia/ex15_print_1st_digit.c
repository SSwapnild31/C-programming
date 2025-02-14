/*
15. Print 1st digit .
i/p1: 9642 o/p1: 9
i/p2: 56725 o/p2: 5
*/

#include<stdio.h>
void main()
{
	int num,r;
	printf("Enter number : ");
	scanf("%d",&num);
	
	for(;num;num=num/10)
	{
		r=num%10;
	}
	printf("1st digit : %d\n",r);
}
