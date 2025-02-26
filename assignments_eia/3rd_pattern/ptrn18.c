/*
        1
      1 4
    1 4 9
  1 4 9 16 
1 4 9 16 25

*/

#include<stdio.h>
void main()
{
	int i,j,k,s,d;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
			printf("  ");
		for(k=0,s=0,d=3;k<=i;k++)
		{
			if(k==0)
				printf(" %d",s=1);
			else
			{
				printf(" %d",s+=d);
				d+=2;
			}
		}
		printf("\n");
	}
}
