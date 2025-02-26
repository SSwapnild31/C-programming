#include<stdio.h>
void main()
{
	int num=0x11223344;
	char ch;
	
	char *p,*q;
	p=q=(char *)&num;
	q=q+3;
	printf("Before numb : %x\n",num);
	
	ch=*p;
	*p=*q;
	*q=ch;
	printf("After num : %x\n",num);
	
	p=p+1;
	q=q-1;
	
	ch=*p;
	*p=*q;
	*q=ch;
	printf("After num : %x\n",num);
}
