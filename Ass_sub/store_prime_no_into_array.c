#include<stdio.h>
void main()
{
	int ar[5],i,j;
	printf("Enter array elements : \n");
	for(i=0;i<5;)
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
	for(i=0;i<5;i++)
		printf("%d ",ar[i]);
	printf("\n");
}
