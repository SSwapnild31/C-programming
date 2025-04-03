#include<stdio.h>

void main()
{
	int a[8],ele;	
	ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter array ele :\n");
	for(int i=0;i<ele;i++)
		scanf("%d",a+i);
	
	
}
