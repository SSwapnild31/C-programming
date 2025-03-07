#include<stdio.h>
void main()
{
	int a[3],b[3],c[6];
	int ele,i;
	ele=sizeof(c)/sizeof(c[0]);
	
	printf("Enter a[] ele :\n");
	for(i=0;i<3;i++)
		scanf("%d",a+i);	
	printf("Enter b[] ele :\n");
	for(i=0;i<3;i++)
		scanf("%d",b+i);
	
	printf("before a[] : ");
	for(i=0;i<3;i++)
		printf("%d ",*(a+i));
	printf("\n");
	printf("before b[] : ");
	for(i=0;i<3;i++)
		printf("%d ",*(b+i));
	printf("\n");
	
	int j,k=0;

	/*for(i=0,k=0;i<3;i++,k++)
	{
		c[k]=a[i];
		k++;
		for(j=i;j<=i;j++)
			c[k]=b[j];
	}*/
	
	for(i=0;i<3;i++)
	{	
		c[k++]=a[i];
		c[k++]=b[i];
	}
	
	printf("c[] : ");
	for(i=0;i<ele;i++)
		printf("%d ",c[i]);
	printf("\n");
}
