#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n,i;
	printf("Enter arr size : ");
	scanf("%d",&n);
	
	int *p;
	p=calloc(n,sizeof(int));
	
	printf("Enter %d arr ele's\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(p[i]==p[j])
			{
				for(int k=j;k<n;k++)
					p[k]=p[k+1];
				n--;
				i--;
			}
		}
	}
	
	p=realloc(p,n);
	
	printf("After : "); 
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	printf("\n");
}
