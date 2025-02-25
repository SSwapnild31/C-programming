/*
1
2 6 
3 7 10
4 8 11 13
5 9 12 14 15
*/

#include<stdio.h>
void main()
{
	int i,j,k,s;
	for(i=1;i<=5;i++)	
	{
		for(j=1,s=0,k=4;j<=i;j++)
		{
			if(j==1)
				printf("%d ",s=i);
			else
			{
				printf("%d ",s+=k--);
			}
		}
		printf("\n");
	}
}
