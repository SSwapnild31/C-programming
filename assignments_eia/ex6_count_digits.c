/*
Count digit in num .
i/p1: 123 o/p1: 3
i/p2: 2076 o/p2: 4
*/

#include<stdio.h>
void main()
{
	int num,r,c=0;
	printf("Enter an number : ");
	scanf("%d",&num);
	
	for(;num;num=num/10)
	{
		r=num%10;
		c++;
	}
	printf("count : %d\n",c);
}
