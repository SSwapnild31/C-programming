/*
19. Reverse digit more than 5.
i/p1: 963 o/p1: 69
i/p2: 27851 o/p2: 87
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
		if(r>5)
		 rev=rev*10+r;
	}
	printf("reverse of more than 5 : %d\n",rev);
}
