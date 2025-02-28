#include<stdio.h>
void main()
{
	int a[5],i,j;
	printf("Enter array ele : ");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	{
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
				break;
		}
		if(a[i]==j)
			printf("%d ",a[i]);
	}
	printf("\n");
}
