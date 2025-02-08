//represent little endian into big endian representation, using bit masking technique.

#include<stdio.h>
void main()
{
	unsigned int num = 0x12345678,r1,r2,r3,r4;
	printf("before = %x\n",num);
	
	r1 = num & 0xff000000;
	r1 = r1 >> 24;
	
	r2 = num & 0x000000ff;
	r2 = r2 << 24;
	
	r3 = num & 0x00ff0000;
	r3 = r3 >> 8;
	
	r4 = num & 0x0000ff00;
	r4 = r4 << 8;
	
	num = r1 | r2 | r3 | r4;
		
	printf("after = %x\n",num);
}
