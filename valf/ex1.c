#include<stdio.h>
#include<stdarg.h>
int sum(int,...);

void main()
{
	int i=10,j=20,k=30,l;
	l=sum(2,i,j);
	printf("l=%d\n",l);
	
	l=sum(3,i,j,k);
	printf("l=%d\n",l);
}

int sum(int n, ...)
{
	va_list v;
	int i,num,sum;
	va_start(v,n);
	for(i=0,sum=0;i<n;i++)
	{
		num=va_arg(v,int);
		sum=sum+num;
	}
	return sum;
}
