/*
20. Reverse digit more than 4
and less than 8.
i/p1: 963 o/p1: 6
i/p2: 27851 o/p2: 57
*/


#include<stdio.h>
void main()
{
	int num,r,rev;
	printf("Enter number : ");
	scanf("%d",&num);
	
	for(rev=0;num;num=num/10)
	{
		r=num%10;
		if(r>4 && r<8)
		 rev=rev*10+r;
	}
	printf("reverse : %d\n",rev);
}
