/*
24. Print middle digit .
i/p1: 96412 o/p1: 4
i/p2: 1725 o/p2: 2 or 7
*/


#include<stdio.h>
void main()
{
	int num,n,r,c;
	printf("Enter number : ");
	scanf("%d",&num);

	for(n=num,c=1;num;num=num/10)
	{
		r=num%10;
		c++;
	}

	c=c/2;
	
	for(int cc=0,r=0;n;n=n/10)
	{	
		r=n%10;
		cc++;
		if(cc==c)
		{
			printf("middle : %d\n",r);
			break;
		}
	}
	//printf("count : %d\n",c,num);
}
