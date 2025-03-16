#include<stdio.h>

void rev_word(char *);
int count_word(char *);
void main()
{
	char s[20];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	int count;
	printf("%s\n",s);
	rev_word(s);
	count=count_word(s);
	printf("%s\n",s);
	printf("word count : %d\n",count);
}

void rev_word(char *s)
{
	char t;
	int i,j,k;
	for(i=0;s[i];i++)
	{
		if(s[i]==' ')
		{
			for(j=0,k=i-1;j<k;j++,k--)
			{
				t=s[j];
				s[j]=s[k];
				s[k]=t;
			}
		}
	}
}

int count_word(char *s)
{
	int i,c=0;
	for(i=0;s[i];i++)
	{
		if(s[i]==' ')
			c++;
	}
}
