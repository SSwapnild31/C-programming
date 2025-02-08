#include<stdio.h>
void main()
{
	int i=0,j=3,k;
	
	k = i && j;
	printf("k=%d\n",k);
	printf("i=%d\n",i);
	printf("j=%d\n",j);

	//k = i && j = 20;	Invalid(lvalue required)
}
