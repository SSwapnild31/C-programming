/*
        Z
      Z Y
    Z Y X
  Z Y X W
Z Y X W V
*/

#include<stdio.h>
void main()
{
	int i,j,k,ch;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
			printf("  ");
		for(k=0,ch='Z';k<=i;k++)
			printf(" %c",ch--);
		printf("\n");
	}
}
