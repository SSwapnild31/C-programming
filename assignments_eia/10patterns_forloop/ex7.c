/*

   321
   21
   1

 */

#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=3;j>i;j--)
			printf("%d",j-i);
		printf("\n");

	}
}
