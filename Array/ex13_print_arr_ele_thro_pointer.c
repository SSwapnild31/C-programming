#include<stdio.h>
void main()
{
	int a[5]={10,20,30,40,50},*p,i;
	p=a;
	printf("%p\n",p);
		
	printf("array ele are : ");
	for(i=0;i<5;i++)
		printf("%d ",*p++);
	printf("\n");
	
	printf("%p\n",p);

}
