#include<stdio.h>
void main()
{
	int a[5],i;
	printf("Enter array elements : ");
	for(i=0;i<5;)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
			i++;
	}
	
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	printf("\n");
}
