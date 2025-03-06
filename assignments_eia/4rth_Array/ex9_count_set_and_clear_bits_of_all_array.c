#include<stdio.h>
void main()
{
	int a[5],ele,i;
	
	ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	int j,set=0,clear=0;
	for(i=0;i<ele;i++)
	{
		for(j=31;j>=0;j--)
			a[i]>>j&1? set++ : clear++;
	}
	printf("set : %d clear : %d\n",set,clear);
}
