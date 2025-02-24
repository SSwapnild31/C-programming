/*

A1B2C
A1B2
A1B
A1
A

*/

#include<stdio.h>
void main()
{
	int i,j,k;
	char ch;
	for(i=0;i<5;i++)
	{	
		for(j=0,ch='A',k=1;j<5-i;j++)
		{	
			if(j%2==0)
				printf("%c",ch++);
			else
				printf("%d",k++);
		}
		printf("\n");
	}
}
