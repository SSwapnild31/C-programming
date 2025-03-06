#include<stdio.h>
void main()
{
	int a[7],ele,i,add;
	ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter array ele : \n");
	for(i=0;i<ele-2;i++)
		scanf("%d",a+i);
	printf("Enter ele to add : ");
	scanf("%d",&add);
	
	printf("original array : ");
	for(i=0;i<ele-2;i++)
		printf("%d ",*(a+i));
	printf("\n");
	
	a[ele-1]=add;
	for(i=ele-2;i>0;i--)
	{	
		a[i]=a[i-1];
	}
	a[0]=add;

	printf("after array  : ");
	for(i=0;i<ele;i++)
		printf("%d ",*(a+i));
	printf("\n");
}
