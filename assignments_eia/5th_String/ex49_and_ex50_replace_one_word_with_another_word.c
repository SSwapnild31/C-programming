#include<stdio.h>
#include<string.h>

void insert(char*,char*);
int adjust(char*,char*,char*,char*);
void my_strstr(char*,char*,char*);
void main()
{
	char m[70],s[20],s1[20];
	printf("Enter main string : ");
	scanf("%[^\n]",m);
	printf("Enter sub string : ");
	scanf(" %[^\n]",s);	
	printf("Enter string to replace : ");
	scanf(" %[^\n]",s1);
	
	printf("before : %s\n",m);
	
	my_strstr(m,s,s1);
	
	printf("after : %s\n",m);
}

void my_strstr(char *m,char *s, char *s1)
{
	int i=0,j=0;
	for(i=0,j=0;m[i];i++)
	{
		if(m[i]==s[j])
		{
			for(j=1;s[j];j++)
			{
				if(m[i+j]!=s[j])
					break;
			}
			if(s[j]=='\0')
			{
				int diff=adjust(m,&m[i],&m[i+j],s1);
				i+=diff;
			}
			j=0;
		}
	}
}

int adjust(char *p,char *m,char *n,char *s1)
{
	int wslen=strlen(p);
	int lenmn=n-m;
	int lens1=strlen(s1);
	
	if(lenmn==lens1)
	{
		insert(m,s1);
		return 0;
	}
	else if(lenmn<lens1)
	{
		int diff=lens1-lenmn,i=0;
		for(i=wslen;&p[i]>=n;i--)
			p[i+diff]=p[i];

		insert(m,s1);
		return diff;
	}
	else if(lenmn>lens1)
	{
		int diff=lenmn-lens1,i=0;
		for(i=lenmn;m[i];i++)
			m[i-diff]=m[i];
		m[i-diff]=m[i];	

		insert(m,s1);
		return 0;
	}
}

void insert(char *m,char *s1)
{
	while(*s1)
		*m++=*s1++;
}
