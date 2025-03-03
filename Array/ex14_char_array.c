#include<stdio.h>
void main()
{
	char ch[10]={'a','b','c'};
	printf("char array is : ");
	for(int i=0;i<3;i++)
		printf("%c ",ch[i]);
	printf("\nsize of ch array %ld\n",sizeof(ch));
}
