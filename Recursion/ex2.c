#include<stdio.h>

void main()
{
	static int i;
	printf("Hello..\n");
	i++;
	if(i<3)
		main();
	printf("Hai..\n");
}
