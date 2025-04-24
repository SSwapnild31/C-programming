#include<stdio.h>

#define op 2

#if(op==1)
void main()
{
	printf("Main1..\n");
}
#elif(op==2)
void main()
{
	printf("Main2..\n");
}
#elif(op==3)
void main()
{
	printf("Main3..\n");
}
#else
void main()
{
	printf("Main4..\n");
}
#endif
