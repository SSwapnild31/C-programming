/*

******
13579
****
135
**
1

*/

#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6-i;j++)
		{	
			if(i%2==0)
				printf("*");
			else
				printf("%d",j*2+1);
		}
		printf("\n");
	}
}
