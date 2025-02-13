/*
4. Sum of digit less than 7.
i/p1: 123 o/p1: 6
i/p2: 276 o/p2: 8
*/


#include<stdio.h>
void main()
{
	int num,r,sum=0;
	printf("Enter an number : ");
	scanf("%d",&num);
	
	for( ;num;num=num/10)
	{
		r=num%10;
		if(r<7)
		 sum+=r;
	}	
	printf("sum : %d\n",sum);
}
