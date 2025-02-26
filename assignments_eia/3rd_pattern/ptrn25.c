/*
F E D C B A
 E D C B A
  D C B A
   C B A
    B A
     A
*/

#include<stdio.h>
void main()
{
	int i,j,k;
	char ch;
	for(i=0;i<6;i++)
	{
		for(j=0;j<i;j++)
			printf(" ");
		for(k=6,ch='F'-j;k>i;k--)
			printf("%c ",ch--);
		printf("\n");
	}
}
