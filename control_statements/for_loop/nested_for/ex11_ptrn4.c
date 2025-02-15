/*
a
bc
def
ghij
klmno
*/


#include<stdio.h>
void main()
{
	int i,j;
	char ch='a';
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++,ch++)
		{
			printf("%c",ch);
		}
	printf("\n");
	}
}
