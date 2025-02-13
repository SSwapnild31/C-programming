/*
Sum of odd digit.
i/p1: 123 o/p1: 4
i/p2: 246 o/p2: 0
*/

#include<stdio.h>
void main()
{
	int num,r,sum=0;
	printf("Enter an number : ");
	scanf("%d",&num);
	
	for(; num ; num=num/10)
	{
		r=num%10;
		if(r%2!=0)
		 sum=sum+r;
	}
	printf("sum of odd digits : %d \n",sum);
}

