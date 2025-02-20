/*
   1
   31
   531
*/

#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i=i+2)
	{
		for(j=i;j>=1;j=j-2)
			printf("%d",j);
		printf("\n");
	}
}
