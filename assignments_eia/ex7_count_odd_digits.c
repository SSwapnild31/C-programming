/*
7. Count odd digit in num.
i/p1: 123 o/p1: 2
i/p2: 2076 o/p2: 1
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
		if(r%2!=0)
		 c++;
	}
	printf("odd digit count : %d\n",c);
}
