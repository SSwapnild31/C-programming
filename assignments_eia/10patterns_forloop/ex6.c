/*

   1
   12
   123

 */

#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<=i;j++)
			printf("%d",j+1);
		printf("\n");
	}

}
