#include<stdio.h>
void main()
{
	unsigned int num=0x12345678,i;
	char *p;
	printf("Before swap : %x\n",num);
	for(i=0,p=(char*)&num;i<4;i++,p++)
		*p=*p>>4|*p<<4;	
	printf("After swap  : %x\n",num);
}
