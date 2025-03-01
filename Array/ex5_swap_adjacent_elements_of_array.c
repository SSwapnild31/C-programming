#include<stdio.h>
void main()
{
	int a[5],ele,i,j;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter array elements : ");

	for(i=0;i<ele;i++)	
		scanf("%d",&a[i]);
	printf("\n");
	
	printf("Before swap : ");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	
	for(i=0;i<ele-1;i+=2)
	{
		int t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}
	
	/*for(i=0,j=1;i<ele-1;i+=2,j+=2)
	{
		int t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}*/
	
	printf("After adjacent swap : ");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");



}
