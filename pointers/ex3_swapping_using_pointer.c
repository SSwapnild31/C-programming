#include<stdio.h>
void main()
{
	int n1,n2,t;
	int *p,*q,*r;
	
	p=&n1;
	q=&n2;
	r=&t;
	
	printf("Enter n1 and n2 : ");
	scanf("%d%d",p,q);
	
	printf("before swap : n1=%d n2=%d\n",n1,n2);
	
	*r=*p;
	*p=*q;
	*q=*r;
	
	printf("after swap : n1=%d n2=%d\n",n1,n2);
}
