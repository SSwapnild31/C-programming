/*

    E
   12
  CDE
 1234
ABCDE

*/

#include<stdio.h>
void main()
{
	int i,j,k,c;
	char ch;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
			printf(" ");
		for(k=0,ch='A'+j,c=1;k<=i;k++)
		{
			if(i%2==0)
				printf("%c",ch++);
			else
				printf("%d",c++);
		}
		printf("\n");
	}
}
