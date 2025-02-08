#include<stdio.h>
void main()
{
	int i=2, j=3;
	//printf("%ld\n",sizeof(i+j));

	char k;
	//printf("%ld\n",sizeof(k=i+j));

	int r=0;
	printf("r=%d\n",r);
	printf("%ld\n",sizeof(r=i+j));
	printf("r=%d\n",r);
}
