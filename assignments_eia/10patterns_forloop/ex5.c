/*

   123
   12
   1

 */

#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<=2-i;j++)
			printf("%d",j+1);
		printf("\n");
	}

}
