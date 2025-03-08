#include<stdio.h>
void main()
{
	int a[6],ele,i;
	ele = sizeof(a)/sizeof(a[0]);
	
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	if(ele<2)
	{
		printf("Array should have atleast 2 elements\n");
		return;
	}
	
	int s,ss;
	if(a[0]<a[1])
	{
		s=a[0];
		ss=a[1];
	}
	else{
		s=a[1];
		ss=a[0];
	}
	for(i=0;i<ele;i++)
	{
		if(a[i]<s)
		{
			ss=s;
			s=a[i];
		}
		else if(a[i]>s && a[i]<ss)
			ss=a[i];
	}
	if(s==ss)
		printf("there is no second smallest ele\n");
	else
		printf("second smallest ele is %d\n",ss);
}
