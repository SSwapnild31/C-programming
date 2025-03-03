#include<stdio.h>
void main()
{
	int a[7],ele,i,j;
	ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter array : ");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	printf("\n");
	
	printf("original array : ");
	for(i=0;i<ele;i++)
		printf("%d ",*(a+i));
	printf("\n");
	///////////////////////////
	
	for(i=0;i<3;i++)
	{	
		for(j=i+1;j<4;j++)
		{	
			if(a[i]<a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	
	///////////////////////////
	printf("first 4 ele in decending : ");
	for(i=0;i<ele;i++)
		printf("%d ",*(a+i));
	printf("\n");
}
