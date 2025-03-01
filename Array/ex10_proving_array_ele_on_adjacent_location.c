#include<stdio.h>
void main()
{
	int a[5]={10,20,30,40,50},i;
	
	for(i=0;i<5;i++)
		printf("&i=%p i=%d\n",&a[i],a[i]);
	printf("%p %d\n",&i,i);
	
	printf("i=%p a[-1]=%d\n",&i,a[-1]);
	
	printf("%p\n",&a+1);
}
