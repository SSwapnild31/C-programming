#include<stdio.h>
void main()
{
	int a[5],ele,i;
	printf("Enter array ele :\n");
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		scanf("%d",a+i);			//&*(a+i), here &(dereference)*(reference) gets cancelled, so it is a+i
	printf("\n");
	
	for(i=0;i<ele;i++)
		printf("%d %d %d\n",a[i],i[a],*(a+i));
	
}
