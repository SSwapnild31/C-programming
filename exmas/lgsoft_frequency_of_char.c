#include<stdio.h>

int main()
{	
	char s[20];
	
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	int flag,c;
	
	for(int i=0;s[i];i++)
	{	
		flag = 0;
		for(int j=0;j<i;j++)
		{
			if(s[i]==s[j])
				flag = 1;
		}
		
		if(flag || s[i]==' ')
			continue;
		c=0;
		for(int k=i;s[k];k++)
		{
			if(s[i]==s[k])
				c++;
		}
		printf("%c -> %d\n",s[i],c);
	}

	return 0;
}
