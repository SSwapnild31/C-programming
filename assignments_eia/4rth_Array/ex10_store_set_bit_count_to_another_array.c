#include<stdio.h>
void main ()
{
	int a[5],b[5],ele,i;
	ele = sizeof(a)/sizeof(a[0]);
	
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	printf("a[%d] = { ",ele);
	for(i=0;i<ele;i++)
		printf("%d ",*(a+i));
	printf("}\n");
	
	int j,set;
	
	for(i=0;i<ele;i++)
	{
		for(j=31,set=0;j>=0;j--)
			a[i]>>j&1 ? set++ : 0  ;
		b[i]=set;
	}
	
	printf("b[%d] = { ",ele);
	for(i=0;i<ele;i++)
		printf("%d ",*(b+i));
	printf("}\n");
}
