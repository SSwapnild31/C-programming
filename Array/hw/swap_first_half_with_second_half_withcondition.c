#include<stdio.h>
void main()
{
	int a[7],ele,i,j;
	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter array ele :");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	printf("\n");
	if(ele%2==0)
	{
		printf("Before swap :");
		for(i=0;i<ele;i++)
			printf("%d",a[i]);
		printf("\n");
		
		printf("swapped...\n");
		for(i=0,j=ele/2;j<ele;i++,j++)
		{	
			int t=a[i];
			a[i]=a[j];
			a[j]=t;	
		}
		printf("After swap : ");
		for(i=0;i<ele;i++)
			printf("%d",a[i]);
		printf("\n");
	}
	else
		printf("swapping not possible..!\n");
}
