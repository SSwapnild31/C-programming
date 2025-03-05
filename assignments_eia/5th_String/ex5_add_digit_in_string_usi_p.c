#include<stdio.h>
void main()
{
	char s[20],*cp;
	cp=s;
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	int i,sum=0;
	for(i=0;cp[i];i++)
	{
		if(cp[i]>='0' && cp[i]<='9')
		{
			sum=sum+(cp[i]-48);
		}
	}
	printf("sum=%d\n",sum);
}
