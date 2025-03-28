#include<stdio.h>
void main()
{
	static int i;
	printf("hello..%d\n",i);
	i++;
	if(i<3)
		main();
	else
		printf("hai..%d\n",i);
}
