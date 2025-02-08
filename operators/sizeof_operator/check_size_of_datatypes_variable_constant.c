#include<stdio.h>
void main()
{
	int i=10;
	char ch='a';
	float f=12.5;
	double d=42.12;
	
	printf("%ld %ld %ld\n",sizeof(int),sizeof(i),sizeof(10));
	printf("%ld %ld %ld\n",sizeof(char),sizeof(ch),sizeof('a'));
	printf("%ld %ld %ld\n",sizeof(float),sizeof(f),sizeof(12.5f));
	printf("%ld %ld %ld\n",sizeof(double),sizeof(d),sizeof(42.12));
	printf("%ld\n",sizeof("Abcd"));
}
