#include<stdio.h>
void main()
{
	int a[7],ele,i,idx,num;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter array ele :\n");
	for(i=0;i<ele-1;i++)
		scanf("%d",a+i);	
	printf("Enter number : ");
	scanf("%d",&num);
	printf("Enter index : ");
	scanf("%d",&idx);
	
	for(i=ele;i>idx;i--)
		a[i]=a[i-1];
	a[idx]=num;

	printf("after : ");
	for(i=0;i<ele;i++)
		printf("%d ",*(a+i));
	printf("\n");
}
