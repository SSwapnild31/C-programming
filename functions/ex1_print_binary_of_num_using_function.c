#include<stdio.h>
void binary_print(int);	
void main()
{
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	binary_print(num);
}
void binary_print(int num)
{
	int pos;
	for(pos=31;pos>=0;pos--)
		printf("%d",num>>pos&1);
	printf("\n");
}
