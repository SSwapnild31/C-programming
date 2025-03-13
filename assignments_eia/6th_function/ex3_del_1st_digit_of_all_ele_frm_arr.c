/*3.WAP in C using function to delete 1st digits of
all elements in array .

i/p: int a[6]={12,142,1234,314,78,414};
o/p: int a[6]={2,42,234,34,8,14};
void del_fun(int *a, int ele );*/

#include<stdio.h>

void print(const int *,int);
void del_ele(const int *,int *,int);
void main()
{
	int a[6],b[6],ele,i;
	ele=6;
	
	printf("Enter arry ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	print(a,ele);
	del_ele(a,b,ele);
	print(b,ele);
}

void del_ele(const int *a,int *b,int ele)
{
	int i,c,temp,r,rev,rev1;
	for(i=0;i<ele;i++)
	{
		for(c=0,temp=a[i];temp;temp/=10,c++);
		for(temp=a[i],rev=0;temp;temp/=10)
		{
			r=temp%10;
			if(c!=1)
			{
				rev=rev*10+r;
				c--;
			}
		}
		for(temp=rev,rev1=0;temp;temp/=10)
		{
			r=temp%10;
			rev1=rev1*10+r;
		}
		b[i]=rev1;
	}

}

void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}
