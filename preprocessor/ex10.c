#include<stdio.h>
#define op	//to define op(macro)

#undef op	//to undefine op(macro)

//#ifdef op	//If defined then true

#ifndef op
void main()
{
	printf("Main1..\n");
}
#else
void main()
{
	printf("Main2..\n");
}
#endif
