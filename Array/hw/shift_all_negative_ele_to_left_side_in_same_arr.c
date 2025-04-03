#include<stdio.h>

void main()
{
	int a[6],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter arr :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	int j,k=0,num;
	for(i=0;i<ele;i++)
	{
		if(a[i]<0)
		{
			num=a[i];
			for(j=i;j>k;j--)
				a[j]=a[j-1];
			a[k++]=num;
		}
	}
	
	printf("after : ");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
