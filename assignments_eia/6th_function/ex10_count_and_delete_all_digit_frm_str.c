#include<stdio.h>

int del_digit(char *);

void main()
{
	char s[20],count;
	printf("Enter string : ");
	scanf("%s",s);
	
	printf("before string : %s\n",s);
	count=del_digit(s);
	printf("count of digit : %d\n",count);
	printf("after string : %s\n",s);
}

int del_digit(char *s)
{
	int i,c=0,k;
	for(i=0;s[i];i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			c++;
			for(k=i;s[k];k++)
				s[k]=s[k+1];
			i--;
		}
	}
	return c;
}
