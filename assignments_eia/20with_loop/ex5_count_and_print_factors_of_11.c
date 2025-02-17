#include<stdio.h>
void main()
{
	int num=11,i,c=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d ",i);
			c++;
		}
	}	
	printf("\ncount = %d\n",c);
}
