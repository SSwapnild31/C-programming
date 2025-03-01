#include<stdio.h>
void main()
{
	int a[5],ele,l,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter arraya ele : ");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("\n");
	l=a[0];
	
	for(i=1;i<ele;i++)
	{
		if(a[i]>l)
			l=a[i];
	}
	printf("Largest ele is %d\n",l);
}
