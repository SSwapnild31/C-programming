#include<stdio.h>
void main()
{
	int i,num=900;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			if(i%2!=0)
			 printf("%d ",i);
		}
	}
	printf("\n");
}
