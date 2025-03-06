#include<stdio.h>
void main()
{
	int a[6],ele,i;
	
	ele = sizeof(a)/sizeof(a[0]);
	
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	int sm;
	sm=a[0];
	for(i=0;i<ele;i++)
	{
		if(a[0]>a[i])
			sm=a[i];
	}
	printf("res : %d\n",sm);
}
