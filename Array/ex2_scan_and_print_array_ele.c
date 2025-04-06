#include<stdio.h>
void main()
{
	int a[5],i;
	printf("Enter array elements : ");
	for(i=0;i<5;i++)
		scanf("%d",a+i);
	
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	printf("\n");
}
