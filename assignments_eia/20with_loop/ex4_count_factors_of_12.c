#include<stdio.h>
void main()
{
	int i,num=12,count=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		 count++;
	}
	printf("count of 12's factors is: %d\n",count);
}
