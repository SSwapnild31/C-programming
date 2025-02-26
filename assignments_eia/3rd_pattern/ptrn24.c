/*    
        A
      B B
    C C C
  D D D D
E E E E E
*/

#include<stdio.h> 
void main()
{
	int i,j,k;
	char ch='A';
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
			printf("  ");
		for(k=0;k<=i;k++)
			printf("%c ",ch);
		ch++;
		printf("\n");
	}
}
