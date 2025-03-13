/*5.WAP in C using function to count -ve element
(bitwise op) and delete -ve elements in array .

i/p: int a[6]={-2, 2,-5,-12,5,-7};
o/p: -ve number count = 4
int a[ ]= {2,5}*/


#include<stdio.h>
void print(int *,int);
int count_del_ele(int *,int);

void main()
{
	int a[6],ele,i;
	ele=6;
	
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	print(a,ele);
	ele=count_del_ele(a,ele);
	print(a,ele);
}

int count_del_ele(int *a,int ele)
{
	int i,c,j;
	for(i=0,c=0;i<ele;i++)
	{
		if(a[i]>>31&1)
		{
			c++;
			for(j=i;j<ele-1;j++)
				a[j]=a[j+1];
			i--;
			ele--;
		}
	}
	printf("-ve number count : %d\n",c);
	return ele;
}

void print(int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}
