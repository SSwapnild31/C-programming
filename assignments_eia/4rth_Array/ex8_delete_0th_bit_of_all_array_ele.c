#include<stdio.h>
void main()
{
	int a[5],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	printf("original ele's : ");	
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	
	for(i=0;i<ele;i++)
	{
		int r;
		r=a[i]>>1;
		a[i]=r;
	}
	
	printf("original ele's : ");	
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
