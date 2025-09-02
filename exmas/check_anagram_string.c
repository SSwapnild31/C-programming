#include<stdio.h>
#include<string.h>

int anagram(char *,char *);
void sort(char *,int);
void copy(char *,char *);

int main()
{	
	char s1[20],s2[20],p1[20],p2[20];
	
	printf("Enter 1st string : ");
	scanf("%s",s1);
	
	printf("Enter 2nd string : ");
	scanf("%s",s2);
	
	copy(p1,s1);
	copy(p2,s2);
	
	int len1 = strlen(p1);
	int len2 = strlen(p2);
	
	if(len1!=len2)
	{
		printf("String's are not Anagram\n");
		return 1;
	}
	
	sort(p1,len1);
	sort(p2,len2);
	
	printf("%s %s\n",p1,p2);
		
	if(anagram(p1,p2))
		printf("String's are Anagram\n");
	else
		printf("String's are not Anagram\n");
	
	return 0;
}

int anagram(char *p,char *q)
{
	while(*p)
	{
		if(*p!=*q)
			return 0;
		p++;
		q++;
	}
	return 1;
}


void sort(char *p,int len)
{
	char ch;
	for(int i=0;i<len-1;i++)
	{
		for(int j=i+1;j<len;j++)
		{
			if(p[i]>p[j])
			{
				ch = p[i];
				p[i] = p[j];
				p[j] = ch;
			}
		}
	}
}

void copy(char *p,char *s)
{
	while(*s)
	{
		if(*s>='A' && *s<='Z')
			*p++ = *s+32;
		if(*s>='a' && *s<='z')
			*p++ = *s;
		s++;
	}
	*p='\0';
}
