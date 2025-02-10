#include<stdio.h>
void main()
{
	int num,r,rev=0;
	printf("Enter an number : ");
	scanf("%d",&num);
	
	for( ; num ; num=num/10)
	{
		r=num%10;
		if(r%3!=0)
			rev=rev*10+r;
		else
			rev=rev*10+1;
	}
	printf("number is : %d\n",rev);
}
