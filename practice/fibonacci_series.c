#include<stdio.h>

int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d",&num);

	int first = 0, second = 1;
		
	while(first<=num)
	{
		printf("%d ",first);
		int result = first + second;
		first = second;
		second = result;
	}
	printf("\n");
	return 0;
}
