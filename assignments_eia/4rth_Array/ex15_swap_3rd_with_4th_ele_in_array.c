#include<stdio.h>
void main()
{

	int a[6],ele,i;
	ele = sizeof(a)/sizeof(a[0]);
	
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	printf("oginal array ele : ");
	for(i=0;i<ele;i++)
		printf("%d ",*(a+i));
	printf("\n");
		
	for(i=0;i<ele;i++)
	{
		if(i==3)
		{
			int t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	
	printf("after swap array ele : ");
	for(i=0;i<ele;i++)
		printf("%d ",*(a+i));
	printf("\n");
}
