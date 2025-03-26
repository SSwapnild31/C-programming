#include<stdio.h>
#include<string.h>
void strshort(char *,int);
void copy(char *,char *);
int anagram(char *,char *);
void main()
{
	char s1[10],m1[10],s2[10],m2[10];
	printf("Enter 1st string : ");
	scanf("%s",s1);
	printf("Enter 2nd string : ");
	scanf("%s",s2);
	
	copy(m1,s1);
	copy(m2,s2);

	int len1=strlen(m1);
	int len2=strlen(m2);
	
	strshort(m1,len1);
	strshort(m2,len2);
	
	if(len1!=len2)
	{
		printf("not anagram..!");
		return ;
	}
	int res=anagram(m1,m2);
	if(res)
		printf("anagram..\n");
	else
		printf("not anagram..!\n");
}

void strshort(char *m,int len)
{
	for(int i=0;i<len-1;i++)
	{
		for(int j=i+1;j<len;j++)
		{
			if(m[i]>m[j])
			{
				char t=m[i];
				m[i]=m[j];
				m[j]=t;
			}
		}
	}
	printf("%s\n",m);
}

int anagram(char *m1,char *m2)
{
	for(int i=0;m1[i];i++)
	{
		if(m1[i]!=m2[i])
			return 0;
	}
	return 1;
}

void copy(char *m,char *s)
{
	while(*s)
	{
		if(*s>='a' && *s<='z')
			*m++=*s;
		else if(*s>='A' && *s<='Z')
			*m++=*s;
		s++;	
	}
	*m='\0';
}

int lenstr(char *p)
{
	int len=0;
	while(*p)
		len++;
	return len;
}
