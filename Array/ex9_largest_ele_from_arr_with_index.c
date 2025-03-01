#include<stdio.h>
void main()
{
	int a[5],ele,i,l,idx;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter array ele : ");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("\n");
	
	l=a[0];
	idx=0;
	for(i=0;i<ele;i++)
	{
		if(a[i]>l)
		{		
			l=a[i];
			idx=i;
		}
	}
	printf("largest ele is %d present @ %d index\n",l,idx);
}
