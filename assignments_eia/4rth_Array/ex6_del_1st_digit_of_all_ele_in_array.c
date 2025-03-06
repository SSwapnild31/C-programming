#include<stdio.h>
void main()
{
	int a[6],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	printf("original array ele : ");
	for(i=0;i<ele;i++)
		printf("%d ",*(a+i));
	printf("\n");
	
	int temp,c,r,rev,rev2;
		
	for(i=0;i<ele;i++)
	{
		for(c=0,temp=a[i];temp;temp/=10,c++);
		for(temp=a[i],rev=0;temp;temp/=10)
		{
			r=temp%10;
			if(c!=1)
				rev=rev*10+r;
			c--;
		}
		for(rev2=0;rev;rev/=10)
		{
			r=rev%10;
			rev2=rev2*10+r;
		}
		a[i]=rev2;
	}
	
	printf("original array ele : ");
	for(i=0;i<ele;i++)
		printf("%d ",*(a+i));
	printf("\n");
}
