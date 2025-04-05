#include<stdio.h>

void main()
{
	int i,j,c=0;
	for(i=2;i<=17;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(i==j)
		{
			c++;
			printf("%d ",i);
		}
	}
	printf("count=%d\n",c);
}
