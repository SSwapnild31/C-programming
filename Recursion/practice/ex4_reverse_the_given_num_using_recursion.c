#include<stdio.h>

//int reverse(int ,int);
int revNum(int);
void main()
{
	int num;
	printf("Enter anumber : ");
	scanf("%d",&num);
	
	int res=revNum(num);
	printf("%d\n",res);
}

int revNum(int num)
{
	static int rev;
	if(num)
	{
		rev=rev*10+num%10;
		revNum(num/10);
	}
	else
		return rev;
}


/*int revNum(int num)
{
	return reverse(num,0);
}

int reverse(int num,int rev)
{
	if(num==0)
		return rev;
	return reverse(num/10,rev*10+num%10);
}*/
