#include<stdio.h>
void main()
{
	int a[7],ele,i,num;
	ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter array ele :\n");
	for(i=0;i<ele-1;i++)
		scanf("%d",a+i);
	printf("Enter number : ");
	scanf("%d",&num);

	printf("before : ");
	for(i=0;i<ele-1;i++)
		printf("%d ",*(a+i));
	printf("\n");

	int j;
	for(i=0;i<ele;i++)
	{
		if(a[i]<=num && a[i+1]>=num)
		{
			for(j=ele;j>i;j--)
				a[j]=a[j-1];
			a[i+1]=num;
			break;
		}
		
	}
	printf("after : ");
	for(i=0;i<ele;i++)
		printf("%d ",*(a+i));
	printf("\n");
}
