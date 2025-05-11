#include<stdio.h>
void main()
{
	int a[5],ele,i,sum;
	ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter array ele : ");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("\n");
	
	for(i=0,sum=0;i<ele;i++)
		sum=sum+*(a+i);
	printf("sum : %d\n",sum);
}
