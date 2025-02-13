#include<stdio.h>
void main()
{
	int i,c=0;
	for(i=21;i<=39;i++)
	{
		if(i%2!=0)
		{
			if(c%2==0)
			{
				printf("%d ",i);
			}
			c++;
		}
	}
	printf("\n");
}



/*
i=23
23%2!=0 T
c=1



*/
