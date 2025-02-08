#include<stdio.h>

void main()
{
	unsigned int i=2000000000,j=3; 
	unsigned long int k;
	k=(unsigned long int)i*j;	//Explicit type casting
	printf("k=%lu\n",k);

}
