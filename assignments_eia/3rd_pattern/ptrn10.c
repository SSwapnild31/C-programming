/*

    #
   AB
  ###
 ABCD
#####

*/

#include<stdio.h>
void main()
{
	int i,j,k;
	char ch;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)	
			printf(" ");
		for(k=0,ch='A';k<=i;k++)
		{	
			if(i%2==0)
				printf("#");
			else
				printf("%c",ch++);
		}
		printf("\n");
	}
}
