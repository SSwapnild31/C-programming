/*
5. Sum of digit in b/w 3 to 8 .
i/p1: 123 o/p1: 3
i/p2: 276 o/p2: 13
*/

#include<stdio.h>
void main()
{
	int num,r,sum=0;
	printf("Enter an number : ");
	scanf("%d",&num);
	
	for( ;num;num=num/10)
	{
		r=num%10;
		if(r>=3 && r<=8)
		 sum+=r;
	}
	printf("sum : %d\n",sum);
}
