#include<stdio.h>
#include<stdlib.h>

int fun(int *);
int main(int argc,char **argv)
{
	int num;
	num=atoi(argv[1]);
	
	if(fun(&num))
		printf("palindrome\n");
	else
		printf("not palindrome\n");
	
	return 0;
}

int fun(int *p)
{
	static int num,flag=0;
	static int rev=0;
	
	if(!flag)
	{
		num=*p;
		flag=1;
	}
	if(*p)
	{
		int r=*p%10;
		rev=rev*10+r;
		*p=*p/10;
		fun(p);
	}
	else
	{
		if(rev==num)
		{
			flag=0;
			rev=0;
			return 1;
		}
		else
			return 0;
	}

}
