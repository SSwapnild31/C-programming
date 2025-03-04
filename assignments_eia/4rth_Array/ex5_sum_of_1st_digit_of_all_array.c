#include<stdio.h>
void main()
{
	int a[5],ele,i,temp,r=0,sum;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter array ele : ");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	printf("\n");
	
	for(i=0,sum=0;i<ele;i++)
	{
		for(temp=a[i];temp;temp/=10)
		{	
			r=temp%10;
		}
		sum=sum+r;
		printf("%d+",r);
	}
	printf("\n--->%d\n",sum);
}
