/*
   aBcDe
   FgHi
   JkL
   mN
   o
*/


#include<stdio.h>
void main()
{
	int i,j;
	char ch='a';
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i;j++,ch=ch^32)
		{	
			printf("%c",ch++);
		}
		printf("\n");
	}
}
