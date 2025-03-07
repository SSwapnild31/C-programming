#include<stdio.h>
void main()
{
	int a[9],ele,i,n1,n2;
	ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter arrya ele :\n");
	for(i=0;i<ele-2;i++)
		scanf("%d",&a[i]);
	printf("Enter 2 numbers : ");
	scanf("%d%d",&n1,&n2);
	
	printf("before : ");
	for(i=0;i<ele-2;i++)
		printf("%d ",a[i]);
	printf("\n");
	
	for(i=ele;i>0;i--)
		a[i]=a[i-2];
	a[0]=n1;
	a[1]=n2;

	printf("after : ");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

}
