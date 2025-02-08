#include<stdio.h>

void main()
{
	/*unsigned int i=2000000000,j=3,k;
	k=i*j;
	printf("k=%u\n",k);
	*/
	
	/*
	unsigned int i=2000000000,j=3;
	unsigned long int k;
	k=i*j;
	printf("k=%lu\n",k);
	*/
	
	unsigned int i=2000000000;
	unsigned long int k,j=3;
	k=i*j;		//Implicit type casting
	printf("k=%lu\n",k);
	
}
