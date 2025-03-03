#include<stdio.h>
void main()
{
	int a[5],*p,i,j,ele;
	p=a;
	ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter array ele : ");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	printf("\n");
	
	printf("original array : ");
	for(i=0;i<ele;i++)
		printf("%d ",*(a+i));
	printf("\n");
	//////////////////////////
	
	for(i=0;i<ele-1;i++)
	{
		for(j=i+1;j<ele;j++)
		{
			if(a[i]<a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}

	//////////////////////////
	printf("decending order : ");
	for(i=0;i<ele;i++)
		printf("%d ",*p++);
	printf("\n");
}
