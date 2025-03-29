#include<stdio.h>

int main()
{
	static int pos=31,num=15;	
	if(pos>=0)
	{
		printf("%d",num>>pos&1);
		pos--;
		main();
	}
	else
	{
		printf("\n");
		return 0;
	}
}

/*void print(int);
void main()
{
	int num=15;
	print(15);
	printf("\n");
	print(15);
	printf("\n");
}

void print(int num)
{
	static int pos=31;
	if(pos>=0)
	{
		printf("%d",num>>pos&1);
		pos--;
		print(num);
	}
	else
		pos=31;
}*/
