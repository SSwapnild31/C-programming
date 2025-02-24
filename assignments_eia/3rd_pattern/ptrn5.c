/*
A
A*
A*C
A*C*
A*C*E
*/

#include<stdio.h>
void main()
{
	int i,j,ch;
	for(i=0;i<5;i++)
	{
		for(j=0,ch='A';j<=i;j++)
		{
			if(j%2==0)
			{
				printf("%c",ch);
				ch=ch+2;
			}
			else
				printf("*");
		}
		printf("\n");
	}
}
