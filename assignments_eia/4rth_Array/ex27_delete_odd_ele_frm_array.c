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
			for(j=i;j<ele-1;j++)
				a[j]=a[j+1];
			i--;
			ele--;
		}
	}

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
