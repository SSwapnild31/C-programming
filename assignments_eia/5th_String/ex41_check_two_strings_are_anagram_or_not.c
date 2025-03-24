#include<stdio.h>

int lenstr(char *);
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
	
	int len1=lenstr(m1);
	int len2=lenstr(m2);

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

int anagram(char *m1,char *m2)
{
	for(int i=0;m1[i];i++)
	{
		for(int j=0;m2[j];j++)
		{
			if(m1[i]==m2[j])
		}
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
