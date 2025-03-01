#include<stdio.h>
void main()
{
	int a[5],ele,i,j;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("\n");
	
	printf("Before sort : ");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	////////////////////////
	
	for(i=0;i<ele-1;i++)
	{
		for(j=i+1;j<ele;j++)
		{
			if(a[i]>a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}	
		printf("After %d iteration : ",i+1);
		for(int k=0;k<ele;k++)
			printf("%d ",a[k]);
		printf("\n");
	}	
	
	////////////////////////
	printf("After sort : ");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
