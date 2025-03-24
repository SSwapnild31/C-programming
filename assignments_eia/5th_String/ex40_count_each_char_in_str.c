#include<stdio.h>

void main()
{
	char s[50];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	for(int i=0;s[i];i++)
	{
		int c=1;
		int flag=0;
		for(int j=0;j<i;j++)
		{
			if(s[j]==s[i] && i!=0)
				flag=1;
		}
		if(flag)
			continue;

		for(int k=i+1;s[k];k++)
		{
			if(s[i]==s[k])
				c++;
		}
		printf("%c-->%d  ",s[i],c);
	}
	printf("\n");
}
