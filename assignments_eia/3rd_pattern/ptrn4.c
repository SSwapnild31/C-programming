/*
13579
 3579
  579
   79
    9
*/

#include<stdio.h>
void main()
{
	int i,j,k,s=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<i;j++)
			printf(" ");
		for(k=0;k<5-i;k++)
			printf("%d",s+k*2);
		printf("\n");
		s=s+2;
	}
}
