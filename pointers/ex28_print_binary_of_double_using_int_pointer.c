#include<stdio.h>
void main()
{
	double d=25.55;
	int *ip=(int *)&d;
	
	for(int i=sizeof(d)-1;i>=0;i--)
	{
		for(int pos=7;pos>=0;pos--)
			printf("%d",ip[i]>>pos&1);
		printf(" ");
	}
	printf("\n");
}
