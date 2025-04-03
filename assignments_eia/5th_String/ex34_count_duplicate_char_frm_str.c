#include<stdio.h>

void main()
{
	char s[30];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	int i,j,c=0,flag=0;
	for(i=0;s[i];i++)
	{
		c=1;
		flag=0;
		for(j=0;j<i;j++)
			if(s[i]==s[j])
				flag=1;
		if(flag)
			continue;
		for(int k=i+1;s[k];k++)
		{
			if(s[i]==s[k] )
				c++;		
		}
		if(c>1)
			printf("%c-->%d\n",s[i],c);
	}
}
