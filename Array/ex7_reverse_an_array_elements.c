#include<stdio.h>
void main()
{
	int a[5],ele,i,j;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("\n");
	
	printf("Before reverse : ");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	///////////////////////////
	
	for(i=0,j=ele-1;i<j;i++,j--)
	{
		int t=a[i];
		a[i]=a[j];
		a[j]=t;
	}			
			
	///////////////////////////	
	printf("After reverse : ");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
