// check bit is on or off if on print "led is on" if it is off make it on.

#include<stdio.h>
void main()
{
	int num=11,pos=3;
	printf("num=%d\n",num);
	
	num>>pos&1 ? printf("led is on\n") : (num = num | 1 << pos);
	
	printf("num=%d\n",num);

}
