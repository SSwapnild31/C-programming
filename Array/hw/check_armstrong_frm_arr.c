#include<stdio.h>

int delete(int *,int);
void main()
{
	int a[6],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	ele=delete(a,ele);
	
	printf("after : ");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}

int delete(int *p,int ele)
{
	int i,temp,c,r,c1,pow,sum=0;
	for(i=0;i<ele;i++)
	{
		for(temp=p[i],c=0;temp;temp/=10,c++);

		for(temp=p[i],sum=0;temp;temp/=10)
		{
			r=temp%10;
			c1=c;
			pow=1;
			while(c1)
			{
				pow=pow*r;
				c1--;
			}
			sum=sum+pow;
		}
		if(p[i]==sum)
		{
			for(int j=i;j<ele-1;j++)
				p[j]=p[j+1];
			ele--;
			i--;
		}
	}
	return ele;
}
