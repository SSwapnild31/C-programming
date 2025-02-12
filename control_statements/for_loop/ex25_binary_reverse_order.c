#include<stdio.h>
void main()
{
	int num;
	printf("Enter int number : ");
	scanf("%d",&num);
	
	int pos;
	
	for(pos=0;pos<=31;pos++)
		printf("%d",num>>pos&1);
	printf("\n");
}
