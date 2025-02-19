#include<stdio.h>
void main()
{
	int i=0;
	while(i++<=2);
	printf("i=%d\n",i);			//o/p : i=4 (because of post-increment) (if we use pre-increment o/p will come i=3)
}
