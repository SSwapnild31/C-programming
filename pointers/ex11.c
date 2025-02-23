#include<stdio.h>
void main()
{
	float f = 23.5;
	float *fp;
	int *ip;
	
	fp=&f;
	ip=(int *)&f;
	
	printf("*fp=%f *ip=%d\n",*fp,*ip);
}
