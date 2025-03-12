#include<stdio.h>
void main()
{
	int a[5],ele,i,j,c=0;
	ele=5;
	
	printf("Enter array : ");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	for(i=0,c=0;i<ele;i++)
	{
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
				break;
		}
		if(a[i]==j)
		{
			printf("%d ",a[i]);
			c++;
		}
	}
	printf("\nprime count is %d\n",c);
}
