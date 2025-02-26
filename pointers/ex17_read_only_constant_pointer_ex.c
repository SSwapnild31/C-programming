#include<stdio.h>
void main()
{
	int i=10;
	//const int *p;
	//int const *p;
	//int *const p;
	const int *const p;
	
	p=&i;			//error
	*p=100;			//error
}
