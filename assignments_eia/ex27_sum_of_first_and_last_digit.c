/*
27. Sum of 1st and last digit .
i/p1: 93321 o/p1: 10
i/p2: 277637 o/p2: 9
*/


#include<stdio.h>
void main()
{
	int num,r,ld;
	printf("Enter num : ");
	scanf("%d",&num);
	
	for(int c=0;num;num=num/10)
	{
		r=num%10;
		c++;
		if(c==1)
		 ld=r;	
	}
	printf("sum of first first and last digit : %d\n",r+ld);
}
