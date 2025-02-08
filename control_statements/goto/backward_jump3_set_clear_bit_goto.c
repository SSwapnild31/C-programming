#include<stdio.h>
void main()
{
	int num;
	printf("Enter num :\n");
	scanf("%d",&num);
	
	int pos = 31,set = 0;
	l:
	if(num>>pos&1)
		set++;
	pos--;
	if(pos>=0)
		goto l;
	printf("set=%d---clear=%d\n",set,32-set);


}
