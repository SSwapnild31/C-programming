#include<stdio.h>
#include<string.h>

#define size 100

int main()
{	
	char s[size];

	printf("Enter binary : ");
	scanf("%s",s);
	
	int len = strlen(s),i;
	
	for(i=0;i<len;i++)
	{
		if(s[i]!='0' && s[i]!='1')
		{
			printf("Invalid input\n");
			return 0;
		}
	}
	
	long int num = 0,ch = 1;

	for(i=len-1;i>=0;i--)
	{
		if(s[i]=='1')
		{
			num = num + 1 * ch;
		}
		ch = ch * 2;
	}
	printf("num : %ld\n",num);
	
	return 0;
}
