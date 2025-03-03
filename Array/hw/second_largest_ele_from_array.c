// test case is : 5 5 1 4 3
	
#include<stdio.h>
void main()
{
	int a[5],ele,i,l,sl;
	ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter array : ");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("\n");
	
	i=2;
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
	else
	{
		if(a[1]>a[2])
		{
			l=a[1];
			sl=a[2];
		}
		else if(a[1]<a[2])
		{
			l=a[2];
			sl=a[1];
		}
		i=3;
	
	}
	for(;i<ele;i++)
	{	
		if(a[i]>l)
		{
			sl=l;
			l=a[i];
		}
		else if(a[i]>sl && sl!=l)
			sl=a[i];
	}
	
	printf("Lergest ele is %d and second largest ele %d\n",l,sl);
}
