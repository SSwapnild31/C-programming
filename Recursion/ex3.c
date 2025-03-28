#include<stdio.h>
void main()
{
	static int i;
	printf("Hello..%d\n",i);
	i++;
	if(i<3)
		main();
	printf("Hai..%d\n",i);
}
