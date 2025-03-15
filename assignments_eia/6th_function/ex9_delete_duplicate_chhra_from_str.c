#include<stdio.h>

void delete_char(char *);
void main()
{
	char s[20];
	
	printf("Enter string : ");
	scanf("%s",s);
	
	printf("Before : %s\n",s);
	delete_char(s);
	printf("After : %s\n",s);
}

void delete_char(char *s)
{
	int i,j,k;
	for(i=0;s[i];i++)
	{
		for(j=i+1;s[j];j++)
		{
			if(s[i]==s[j])
			{
				for(int k=j;s[k];k++)
					s[k]=s[k+1];
				j--;
			}
		}
	}
}
