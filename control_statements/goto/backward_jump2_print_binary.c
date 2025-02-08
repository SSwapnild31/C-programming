#include<stdio.h>
void main()
{
	int num;
	printf("Enter num : \n");
	scanf("%d",&num);
	
	int pos = 31;
	l:
	printf("%d",num>>pos&1);
	pos--;
	if(pos>=0)
		goto l;
	printf("\n");


}
