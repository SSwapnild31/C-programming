#include<stdio.h>
void main()
{
	char ch[20];
	printf("Enter string : ");
	scanf("%[^\n]",ch);
	
	int i,j;
	for(i=0;ch[i];i++);
	for(j=2;j<i;j++)
		if(i%j==0)
			break;
	if(i==j)
		printf("yes %d is prime number.\n",i);
	else
		printf("no %d is not prime number..!\n",i);
}
