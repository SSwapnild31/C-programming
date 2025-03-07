#include<stdio.h>
void main()
{
	int a[7],ele,i,j;
	ele = sizeof(a)/sizeof(a[0]);
	
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	for(i=0;i<2;i++)	
	{
		for(j=i+1;j<3;j++)
			if(a[i]>a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		
	}		
	
	printf("after : ");
	for(i=0;i<ele;i++)
		printf("%d ",*(a+i));
	printf("\n");
}
