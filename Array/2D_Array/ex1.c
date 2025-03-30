#include<stdio.h>

void main()
{
	int a[3][3]={{10,20,30},{40,50,60},{70,80,90}};
	int r,c;
	r=sizeof(a)/sizeof(a[0]);
	c=sizeof(a[0])/sizeof(a[0][0]);
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
