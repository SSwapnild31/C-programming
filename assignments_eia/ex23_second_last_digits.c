/*
23. Print 2nd last digit .
i/p1: 96412 o/p1: 1
i/p2: 725 o/p2: 2
*/


#include<stdio.h>
void main()
{
	int num,r,c;
	printf("Enter number : ");
	scanf("%d",&num);
	
	for(c=0;num;num=num/10)
	{
		r=num%10;
		c++;
		if(c==2)
		 printf("2nd last digit : %d\n",r);
	}
}
