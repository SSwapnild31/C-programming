#include<stdio.h>
void main()
{
	float f=23.5;
	char *c;
	
	c=(char *)&f;
	
	int i,j;
	
	for(i=sizeof(f)-1;i>=0;i--)
	{
		for(j=7;j>=0;j--)
			printf("%d",c[i]>>j&1);
		printf(" ");
	}
	printf("\n");
}
