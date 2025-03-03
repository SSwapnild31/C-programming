#include<stdio.h>
void main()
{
	int a[5],i,*p,ele;
	p=a;
	ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter array elements : ");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("\n");
	
	printf("array elements are : ");
	for(i=0;i<ele;i++)
		printf("%d ",p[i]);		//*p++, using this also we can print
	printf("\n");
}
