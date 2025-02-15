/*
1
abc
12345
abcdefg
123456789
*/


#include<stdio.h>
void main()
{
	int i,j;
	char ch;
	for(i=0;i<5;i++)
	{
		for(ch='a',j=0;j<=i*2;j++,ch++)
		{
			if(i%2==0)
			 printf("%d",j+1);
			else 
			 printf("%c",ch);
		}
		printf("\n");
	}
}
