
//	this logic doesn't work, if first 2 elements are same

#include<stdio.h>
void main()
{
	int a[5],ele,i,l,sl;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter array ele : ");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("\n");
	
	if(a[0]>a[1])
	{
		l=a[0];
		sl=a[1];
	}
	else if(a[0]<a[1])
	{
		l=a[1];
		sl=a[0];
	}
	
	for(i=2;i<ele;i++)
	{
		if(a[i]>l)
		{
			sl=l;
			l=a[i];
		}
		else if(a[i]>sl && a[i]!=l)
			sl=a[i];
	}
	printf("largest : %d \nsecons largest : %d\n",l,sl);
}
