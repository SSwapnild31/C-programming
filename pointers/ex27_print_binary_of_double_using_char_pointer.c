#include<stdio.h>
void main()
{
	double d=25.55;
	char *c=(char *)&d;
	
	int i,j;
	for(i=sizeof(d)-1;i>=0;i--)
	{
		for(j=7;j>=0;j--)
			printf("%d",c[i]>>j&1);
		printf(" ");
	}
	printf("\n");
}
