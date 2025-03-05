#include<stdio.h>
void main()
{
	char s[20],*p;
	printf("Enter an string : ");
	scanf("%[^\n]",s);
	
	int len,i,c=0;
	for(len=0;s[len];len++);
	for(i=0;i<len;i++)
	{
		if(s[i]>='0' && s[i]<='9')
			c++;
	}
	printf("count=%d\n",c);
}
