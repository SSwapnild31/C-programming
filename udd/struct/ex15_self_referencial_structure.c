#include<stdio.h>


//this type of structure is useful in data structure(specially linked list).
struct A
{
	int i;
	char ch;
	float f;
	struct A *p;
};


struct B		//invalid structure because of variable p
{
	int i;
	char ch;
	float f;
	struct B p;
};

void main()
{
 
}
