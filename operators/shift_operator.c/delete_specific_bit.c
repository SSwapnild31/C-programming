#include<stdio.h>
void main()
{
	int num = 0x15,r1,r2;
	
	printf("before : %x\n",num);
	
	r1 = num >> 4;
	r1 = r1 << 1;
	
	r2 = num << 7;
	r2 = r2 >> 7;
	
	num = r1 | r2;
		
	printf("after : %x\n",num);
}
