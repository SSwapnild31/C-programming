/*
2. Sum of 1st 3 odd digit .
i/p1: 93321 o/p1: 15
i/p2: 277637 o/p2: 17
*/


#include<stdio.h>
void main()
{
	int num,r,rev,sum,c;
	printf("Enter an number : ");
	scanf("%d",&num);

	for(rev=0;num;num=num/10)
	{
		r=num%10;
		rev=rev*10+r;
	}
	for(r=0,sum=0,c=0;rev;rev=rev/10)
	{
		r=rev%10;
		if(r%2!=0)
		{
			c++;
			sum+=r;
		}
		if(c==3)
		 break;
	}
	printf("sum : %d\n",sum);
}
