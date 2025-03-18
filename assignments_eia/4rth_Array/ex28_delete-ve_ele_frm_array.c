#include<stdio.h>
void delete_neg(int [],int,int *);

void main()
{
	int a[6],ele,i;
	ele=6;
	int nz;				//new size
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	delete_neg(a,ele,&nz);
	
	printf("after : ");
	for(i=0;i<nz;i++)
		printf("%d ",a[i]);
	printf("\n");
}

void delete_neg(int a[],int ele,int *nz)
{
	int i,temp[ele],j=0;
	
	for(i=0;i<ele;i++)
	{
		if(a[i]>=0)
			temp[j++]=a[i];
	}
	
	for(i=0;i<j;i++)
		a[i]=temp[i];
	*nz=j;
}
