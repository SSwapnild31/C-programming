#include<stdio.h>

void main()
{
	int a[6],ele,i;
	ele=6;
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	int j;
	for(i=0;i<ele;i++)
	{
		if(a[i]%2!=0)
		{
			a[j]=a[i];
			j++;	
		}
	}

	for(i=0;i<j;i++)
		printf("%d ",a[i]);
	printf("\n");
}
