#include<stdio.h>

int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d",&num);

	for(int pos=31;pos>=0;pos--){
		printf("%d",num>>pos&1);
	}
	printf("\n");
	return 0;
}
