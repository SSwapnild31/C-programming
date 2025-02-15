/*
1
ab
123
abcd
12345
*/

#include<stdio.h>
void main()
{
	int i,j;
	char ch;
	for(i=0;i<5;i++)
	{
		for(ch='a',j=0;j<=i;j++,ch++)
		{
			if(i%2==0)
			 printf("%d",j+1);
			else
			 printf("%c",ch);
		}
		printf("\n");
	}
}
