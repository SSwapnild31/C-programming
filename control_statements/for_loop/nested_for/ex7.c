#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2-i;j++)
		 printf("%c",'a'+i);
		printf("\n");
	}
}

/*

aaa
bb
c

*/
