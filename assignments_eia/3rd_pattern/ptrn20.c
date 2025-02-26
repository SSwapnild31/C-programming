/*   
      Z
    Z Y X
  Z Y X W V
Z Y X W V U T
*/

#include<stdio.h>
void main()
{
	int i,j,k;
	char ch;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3-i;j++)
			printf("  ");
		for(k=0,ch='Z';k<=i*2;k++)
			printf("%c ",ch--);
		printf("\n");
	}
}
