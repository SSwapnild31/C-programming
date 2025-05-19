#include<stdio.h>

int main()
{
	int a[5];
	int *p[5];
	int i,j,c=0;
	
	printf("Enter array ele\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		p[i]=&a[i];
	}

	for(i=0;i<5;i++)
	{
		for(j=2;j<*p[i];j++)
		{
			if(*p[i]%j==0)
				break;
		}
		if(*p[i]==j)
			c++;
	}
	
	printf("prime count : %d\n",c);
}
