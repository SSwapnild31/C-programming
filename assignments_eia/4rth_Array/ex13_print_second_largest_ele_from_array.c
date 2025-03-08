#include<stdio.h>

void main()
{
	int a[6],ele,i;
	ele = sizeof(a)/sizeof(a[0]);
	
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	int l=-1,sl=-1;
	
	for(i=0;i<ele;i++)
	{
		if(a[i]>l)
		{
			sl=l;
			l=a[i];
		}
		else if(a[i]>sl && a[i]<l)
		{
			sl=a[i];
		}
	}
	if(sl==-1)
		printf("Largest ele is %d\nand there is no second largest ele..!\n",l);		
	else
		printf("Largest ele is %d\nSecond Largest ele is %d\n",l,sl);
}
