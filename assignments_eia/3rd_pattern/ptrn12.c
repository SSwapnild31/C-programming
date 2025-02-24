/*

EDCBA
*DCBA
**CBA
***BA
****A

*/

#include<stdio.h>
void main()
{
	int i,j;
	char ch;
	for(i=0;i<5;i++)
	{
		for(ch='E',j=0;j<5;j++,ch--)
		{
			if(j<i)
				printf("*");
			else
				printf("%c",ch);
		}
		/*for(k=0;k<=i;k++)*/
		printf("\n");
	}
}
