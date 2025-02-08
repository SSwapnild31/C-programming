#include<stdio.h>
void main()
{
	int i=5;
	double d=1.6;
	//printf("%ld\n",sizeof(i+d));

	char ch1='a',ch2='b';
	//printf("%ld\n",sizeof(ch1+ch2));
	//printf("%ld\n",sizeof(ch1=ch1+ch2));	
	
	int a=5,b=10;
	//printf("%ld\n",sizeof(a>b+i));

	short int k=120;
	printf("%ld\n",sizeof(k>ch1+b));
}
