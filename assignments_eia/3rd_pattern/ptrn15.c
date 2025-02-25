/*
1
1 2
1 2 4
1 2 4 7
1 2 4 7 11
*/

#include<stdio.h>
void main()
{
	int i,j,k,s;
	for(i=0;i<5;i++)
	{	
		for(j=0,k=1,s=0;j<=i;j++)
		{
			if(j==0)
				printf("%d ",s=j+1);
			else
				printf("%d ",s=s+k++);
		}
		printf("\n");
	}
}
