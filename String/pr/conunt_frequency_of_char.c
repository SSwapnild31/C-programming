#include<stdio.h>

void main()
{
	char s[50];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	int c,flag;
	 
	for(int i=0;s[i];i++)
	{
		c=1;
		flag=0;
		for(int j=0;j<i;j++)
		{
			if(s[i]==s[j])
				flag=1;
		}
		if(flag)
			continue;
		
		for(int k=i+1;s[k];k++)
			if(s[i]==s[k])
				c++;
	
		printf("%c --> %d\n",s[i],c);
	}
}
