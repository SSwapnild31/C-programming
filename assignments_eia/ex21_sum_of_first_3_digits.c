/*
21. Sum of 1st 3 digit .
i/p1: 96321 o/p1: 18
i/p2: 2786 o/p2: 17
*/


#include<stdio.h>
void main()
{
	int num,r,rev,sum,c=0;
	printf("Enter number : ");
	scanf("%d",&num);
	
	for(rev=0;num;num=num/10)
	{
		r=num%10;
		rev=rev*10+r;
	}
	for(r=0,sum=0;rev;rev=rev/10)
	{
		r=rev%10;
		sum=sum+r;
		c++;
		if(c==3)
		 break;
	}
	printf("sum : %d\n",sum);
}
