/*
1
321
54321
7654321
*/

#include<stdio.h>
void main()
{
	int i,j,k,s;
	for(i=0;i<4;i++)
	{
		for(j=0,k=1,s=0;j<=i*2;j++)
		{	
			if(j==0)
				printf("%d",s=i*2+k);
			else
				printf("%d",s-j);
		}
		printf("\n");
	}
}
