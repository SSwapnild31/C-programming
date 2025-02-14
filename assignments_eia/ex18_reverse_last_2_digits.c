/*
18. Reverse last 2 digit .
i/p1: 963 o/p1: 36
i/p2: 27851 o/p2: 15
*/


#include<stdio.h>
void main()
{
	int num,r,rev,c;
	printf("Enter number : ");
	scanf("%d",&num);
	
	for(rev=0,c=0;num;num=num/10)
	{
		r=num%10;
		rev=rev*10+r;
		c++;
		if(c==2)
		 break;
	}
	printf("Reverse last 2 digits : %d\n",rev);
}
