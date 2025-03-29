#include<stdio.h>

void fibon(int );
void main()
{
	int n;
	printf("Enter n value : ");
	scanf("%d",&n);
	
	fibon(n);
	printf("\n");
}

void fibon(int n)
{
	static int first=1,second=0,res;
	if(res<n)
	{
		printf("%d ",res);
		res=first+second;
		first=second;
		second=res;
		fibon(n);
	}

}
