#include<stdio.h>

int count_strstr(const char *,const char *);
void main()
{
	char m[50],s[25];
	printf("Enter main string : ");
	scanf("%[^\n]",m);
	printf("Enter sub string : ");
	scanf(" %[^\n]",s);
	
	int res=count_strstr(m,s);
	printf("count of sub string is %d\n",res);
}

int count_strstr(const char *m,const char *s)
{
	int c=0;
	for(int i=0,j=0;m[i];i++)
	{
		if(m[i]==s[j])
		{
			for(j=1;s[j];j++)
			{
				if(m[i+j]!=s[j])
					break;
			}
			if(s[j]=='\0')
				c++;
		}	j=0;
	}
	return c;
}
