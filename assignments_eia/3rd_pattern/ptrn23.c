/*
4321
 ABC
  21
   A
*/

#include<stdio.h>
void main()
{
	int i,j,k;
	char ch;
	for(i=0;i<4;i++)
	{
		for(j=0;j<i;j++)
			printf(" ");
		for(k=4,ch='A';k>i;k--)
		{
			if(i%2==0)
				printf("%d",k-j);
			else
				printf("%c",ch++);
		}
		printf("\n");
	}
}
