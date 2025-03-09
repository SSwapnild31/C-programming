#include<stdio.h>
void main()
{
	char s[20];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	int len,temp,r,fact,sum;
	for(len=0;s[len];len++);
	for(temp=len,sum=0;temp;temp/=10)
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
	if(len==sum)
		printf("%d is strong number..\n",len);
	else
		printf("%d is not strong number..!\n",len);
}
