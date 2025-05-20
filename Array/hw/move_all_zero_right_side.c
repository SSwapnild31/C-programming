#include<stdio.h>

int main()
{	
	int a[5];
	int ele=sizeof(a)/sizeof(a[0]);
	
	int i,j,k=0;

	printf("Enter arr ele\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<ele;i++)
	{
		/*if(a[i]==0)
		{
			k++;
			for(j=i;j<ele-k;j++)
				a[j]=a[j+1];
			a[j]=0;
			i--;
		}*/
	
		if(a[i]!=0)
			a[k++]=a[i];
	}
	
	while(k<ele)
		a[k++] = 0;
	
	printf("after : ");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
