/*
26.Print 1st odd digit from start.
i/p1: 64512 o/p1: 5
i/p2: 41725 o/p2: 1
*/

#include<stdio.h>
void main()
{
	int num,r,rev=0,n;
	printf("Enter number : ");
	scanf("%d",&num);
	
	for(num;num;num=num/10)
	{
		r=num%10;
		rev=rev*10+r;
	}
	for(r=0;rev;rev=rev/10)
	{
		r=rev%10;
		if(r%2!=0)
		{
			printf("%d\n",r);
			break;
		}
	}
}
