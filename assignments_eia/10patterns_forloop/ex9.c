/*
   642
   42
   2
*/

#include<stdio.h>
void main()
{
	int i,j;
	for(i=6;i>=2;i=i-2)
	{
		for(j=i;j>=2;j=j-2)
			printf("%d",j);
		printf("\n");
	}
}
