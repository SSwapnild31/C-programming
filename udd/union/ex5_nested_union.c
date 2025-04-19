#include<stdio.h>

union a
{
	union b
	{
		int i;
		char *p;
	}B;
	
	union c
	{
		float f[3];
		int a[2][2];
	}C;

	struct d
	{
		int *r[2];
		double k;
	}D;
}A;

void main()
{
	printf("%ld\n",sizeof(A.C.f));
	printf("%ld\n",sizeof(A.C));
}
