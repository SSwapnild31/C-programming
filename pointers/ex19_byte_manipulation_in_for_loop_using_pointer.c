#include<stdio.h>
void main()
{
	int i,num=0x11223344;
	char ch;
	char *p,*q;
	p=q=(char*)&num;
	
	for(i=0,q=q+3;i<=1;i++,p=p+1,q=q-1)
	{
		ch=*p;
		*p=*q;
		*q=ch;
	}
	printf("After number : %x\n",num);
	
	
	/*without using extra variables
	
	for(q=q+3;p<q;p++,q--)
	{	
		ch=*p;
		*p=*q;
		*q=ch;
	}
	printf("After swap : %x\n",num);
	*/
}
