#include<stdio.h>

#define BIG(i,j) if(i>j) \
		   printf(#i " is bigger\n"); \
		 else\
		   printf(#j " is bigger\n");

void main()
{
	int a=10,b=5;
	BIG(a,b);
}
