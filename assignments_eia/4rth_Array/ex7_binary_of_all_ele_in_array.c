#include<stdio.h>
void main()
{
	int a[5],ele,i,j;
	ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	printf("array ele's are : ");
	for(i=0;i<ele;i++)
		printf("%d ",*(a+i));
	printf("\n\n");
	
	for(i=0;i<ele;i++)
	{
		printf("binary of %d is \n",a[i]);
		for(j=31;j>=0;j--)
			printf("%d",a[i]>>j&1);
			if(j%8==0)
				printf(" ");
		printf("\n");
	}
}
