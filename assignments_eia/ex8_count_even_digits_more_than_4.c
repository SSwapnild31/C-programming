/*
8.Count even digit more than 4
i/p1: 123 o/p1: 0
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
		if(r>4 && r%2==0)
		 c++;
	}
	printf("count of even digits more than 4 : %d\n",c);
}
