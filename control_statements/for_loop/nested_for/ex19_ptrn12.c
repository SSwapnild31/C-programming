/*

    *
   * *
  * ^ *
 * ^ ^ *
* ^ ^ ^ *
 * ^ ^ *
  * ^ *
   * *
    *

*/


#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			if(k==0 || k==i)
			 printf("* ");
			else
			 printf("^ ");
			
		}
		printf("\n");
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(k=0;k<4-i;k++)
		{
			if(k==0 || k==3-i)
			 printf("* ");
			else
			 printf("^ ");
		}
		printf("\n");
	}
}
