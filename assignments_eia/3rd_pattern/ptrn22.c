/*

* * * * *
 4 3 2 1
  * * *
   2 1
    *
*/

#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=0;i<5;i++)
	{	
		for(j=0;j<i;j++)
			printf(" ");
		for(k=5;k>i;k--)
		{
			if(i%2==0)
				printf("* ");
			else
				printf("%d ",k-j);
		}
		printf("\n");
	}
}
