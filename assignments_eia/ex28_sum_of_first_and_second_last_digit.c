/*
28. Sum of 1st and 2nd last
digit of given any int num .
i/p1: 93321 o/p1: 11
i/p2: 277637 o/p2: 5
*/


#include<stdio.h>
void main()
{
	int num,r,sld;
	printf("Enter an number : ");
	scanf("%d",&num);
	
	for(int c=0;num;num=num/10)
	{
		r=num%10;
		c++;
		if(c==2)
			sld=r;
	}
	printf("sum of 1st and 2nd last digit : %d\n",sld+r);
}
