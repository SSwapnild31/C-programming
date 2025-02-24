 /*
1234*
123*5
12*45
1*345
*2345
*/

#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<5;i++)
	{	
		for(j=4;j>=0;j--)
		{
			if(j==i)
				printf("*");
			else
				printf("%d",5-j);
		}
		printf("\n");
	}
}
