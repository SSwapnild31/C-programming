/*

5
**
543
****
54321

*/

#include<stdio.h>
void main()
{
	int i,j;
	for(i=5;i>0;i--)
	{	
		for(j=5;j>=i;j--)
		{
			if(i%2!=0)
				printf("%d",j);
			else
				printf("*");
		}
		printf("\n");
	}
}
