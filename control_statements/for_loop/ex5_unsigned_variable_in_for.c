#include<stdio.h>
void main()
{
	//int i=0;		//execute normal, o/p is 2 1 0
	
	unsigned int i=0;
	for(i=2;i>=0;i--)	//infinite loop, because in unsigned int there is no -ve numbers 
	printf("i=%u\n",i);
}
