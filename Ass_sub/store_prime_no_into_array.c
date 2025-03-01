#include<stdio.h>
void main()
{
	int ar[5],i,j,ele;
	ele=sizeof(ar)/sizeof(ar[0]);
	printf("Enter array elements : \n");
	for(i=0;i<ele;)
	{
		scanf("%d",&ar[i]);
		for(j=2;j<ar[i];j++)
		{
			if(ar[i]%j==0)
				break;
		}
		if(ar[i]==j)
			i++;
	}
	
	printf("array elements are : ");
	for(i=0;i<ele;i++)
		printf("%d ",ar[i]);
	printf("\n");
}
