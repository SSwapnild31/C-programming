//WAP in C to print given series 1 2 4 7 11 16 22

#include<stdio.h>
void main()
{
	int i,s=1;
	for(i=0;i<=22;i++)
	{
		s=s+i;	
		printf("%d ",s);
		if(s==22)
		 break;
	}
	printf("\n");
}
