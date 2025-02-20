/*

*
***
*****

*/


#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<=i*2;j++)
			printf("*");
		printf("\n");
	}
}
