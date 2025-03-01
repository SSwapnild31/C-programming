#include<stdio.h>
void main()
{
	int a[5],ele,i,j;
	ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter array ele : ");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("\n");
	
	printf("Before swap : ");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	///////////////////////////
	
	for(i=0,j=ele/2;i<ele/2;j++,i++)	//i<ele/2 : last element as it is, if ele size odd //j<ele : last swapped to center
	{
		int t=a[i];
		a[i]=a[j];
		a[j]=t;
	}	
	///////////////////////////
	printf("After half swap : ");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
