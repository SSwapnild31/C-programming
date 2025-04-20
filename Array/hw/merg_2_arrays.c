#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n1,n2,i,j;
	printf("Enter size of both arrays arr1 & arr2\n");
	scanf("%d%d",&n1,&n2);
	
	int *p,*q;
	
	p=calloc(n1,sizeof(int));
	q=calloc(n2,sizeof(int));
	
	printf("Enter arr1 ele's :");
	for(i=0;i<n1;i++)
		scanf("%d",&p[i]);
	
	printf("Enter arr2 ele's :");
	for(i=0;i<n2;i++)
		scanf("%d",&q[i]);
	
	p=realloc(p,n1+n2);
	
	for(i=n1;i<n1+n2;i++)
		p[i]=q[j++];
	
	printf("After merg : ");
	for(i=0;i<n1+n2;i++)
		printf("%d ",p[i]);
	printf("\n");
}
