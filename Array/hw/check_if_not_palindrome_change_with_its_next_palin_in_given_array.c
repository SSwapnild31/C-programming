#include<stdio.h>
void main()
{
	int a[7],ele,i;
	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter array ele : \n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);

	printf("original ele: ");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

	int num,r,rev,k=0,temp;

	for(i=0;a[i];i++)
	{	
		for(num=a[i],rev=0;num;num/=10)	
		{	
			r=num%10;
			rev=rev*10+r;
		}
		if(a[i]!=rev)
		{
			for(k=a[i]+1; ;k++)
			{
				for(temp=k,rev=0;temp;temp/=10)
				{
					r=temp%10;
					rev=rev*10+r;
				}
				if(k==rev)
				{
					a[i]=k;
					break;
				}
			}
		}
	}

	printf("after ele  : ");
	for(i=0;i<ele;i++)
		printf("%d ",*(a+i));
	printf("\n");
}
