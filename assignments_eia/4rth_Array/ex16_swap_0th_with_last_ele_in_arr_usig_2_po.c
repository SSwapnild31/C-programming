#include<stdio.h>
void main()
{
	int a[6],ele,i,*p,*q;
	ele = sizeof(a)/sizeof(a[0]);
	
	p=a;
	q=a+(ele-1);
	
	printf("Enter array elr :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	printf("original array : ");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	//////////////////////////

	*p=*p^*q;
	*q=*p^*q;
	*p=*p^*q;
	
	//////////////////////////
	printf("after swap : ");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	
}
