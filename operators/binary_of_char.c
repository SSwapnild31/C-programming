#include<stdio.h>
void main()
{
	char num,pos,res;
	printf("Enter 1 byte number:\n");
	scanf("%hhd",&num);
	
	pos=7;
	res=num>>pos&1;
	printf("%d",res);

	pos=6;
	res=num>>pos&1;
	printf("%d",res);

	pos=5;
	res=num>>pos&1;
	printf("%d",res);
	
	pos=4;
	res=num>>pos&1;
	printf("%d",res);
	
	pos=3;
	res=num>>pos&1;
	printf("%d",res);

	pos=2;
	res=num>>pos&1;
	printf("%d",res);

	pos=1;
	res=num>>pos&1;
	printf("%d",res);
	
	pos=0;
	res=num>>pos&1;
	printf("%d",res);

	printf("\n");
}





