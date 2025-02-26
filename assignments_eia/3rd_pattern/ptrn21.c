/*
P Q R S T U V
  P Q R S T
    P Q R
      P
*/

#include<stdio.h>
void main()
{
	int i,j,k;
	char ch;
	for(i=0;i<4;i++)
	{
		for(j=0;j<i;j++)
			printf("  ");
		for(k=0,ch='P';k<=6-i*2;k++)
			printf("%c ",ch++);
		printf("\n");
	}
}
