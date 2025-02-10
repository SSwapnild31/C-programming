#include<stdio.h>
void main()
{
	int num,count=0,r;
	printf("Enter an number : ");
	scanf("%d",&num);
	
	for( ; num ; num=num/10)
	{
		r=num%10;
		if(r>5)
		count++;
	}
	printf("count is : %d \n",count);
	
}
