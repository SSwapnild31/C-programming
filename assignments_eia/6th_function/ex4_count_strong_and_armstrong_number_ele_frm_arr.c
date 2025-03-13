/*
4.WAP in C using function to count strong and
armstrong number elements in array .

i/p: int a[6]={2,153,145,2,3,153};
o/p: strong number count = 3
armstrong number count = 5
int strong_fun(int *a, int ele );
int armstrong_fun(int *a, int ele );*/


#include<stdio.h>

void print(const int *,int);
int strongCount(const int *,int);
int armstrongCount(const int *,int); 

void main()
{
	int a[6],ele,i;
	ele=6;
	
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	print(a,ele);
	printf("strong count : %d\n",strongCount(a,ele));
	printf("armstrong count : %d\n",armstrongCount(a,ele));
}

int armstrongCount(const int *a,int ele)
{
	int i,p,temp,c,c1,sum,r,arm,count=0;
	for(i=0;i<ele;i++)
	{
		for(temp=a[i],c=0;temp;temp/=10,c++);
		for(temp=a[i],sum=0;temp;temp/=10)
		{
			r=temp%10;
			c1=c;
			arm=1;
			while(c1)
			{
				arm=arm*r;
				c1--;
			}
			sum=sum+arm;
		}	
		if(a[i]==sum)
		{
			//printf("%d ",a[i]);
			count++;
		}
	}
	return count;
}

int strongCount(const int *a,int ele)
{
	int i,temp,sum,r,fact,count=0;;
	for(i=0;i<ele;i++)
	{
		for(temp=a[i],sum=0;temp;temp/=10)
		{
			r=temp%10;
			fact=1;
			while(r)
			{
				fact=fact*r;
				r--;
			}
			sum=sum+fact;
		}
		if(a[i]==sum)
		{
			//printf("%d ",a[i]);
			count++;
		}
	}
	return count++;
}


void print(const int *a,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
