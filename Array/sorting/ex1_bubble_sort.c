#include<stdio.h>
void main()
{
	int a[5],ele,i,j;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter array ele :\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("\n");
	
	printf("Before sort : ");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	////////////////////////
	
	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;

			}
		}
					/*printf("After %d iteration : ",i+1);
					for(int k=0;k<ele;k++)
						printf("%d ",a[k]);
					printf("\n");*/

	}

	////////////////////////
	printf("After sort : ");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");



}
