/*
   1
   1 3
   1 3 5
   1 3 5 7
*/

#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",j*2+1);
		}
		printf("\n");
	}
}
