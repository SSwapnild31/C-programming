#include<stdio.h>
#include<string.h>

void strrev1(char *,char *);
void my_strchr(char *);
void main()
{
	char s[50];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	printf("After : %s\n",s);
	my_strchr(s);
	printf("After : %s\n",s);
}

void my_strchr(char *s)
{
	char *p=s;
	int i,j=0,flag=0;
	int len=strlen(p);
	
	for(i=0;i<=len;i++)
	{
		if(!((p[i]>='0' && p[i]<='9') || (p[i]>='a' && p[i]<='z') || (p[i]>='A' && p[i]<='Z') || (p[i]==' ') || (p[i]=='\0')))
			flag=1;
		if((p[i]==' ' || p[i]=='\0') && flag)
		{
			strrev1(&p[j],&p[i-1]);
			flag=0;
			j=i+1;
		}
		else if(p[i]==' ')
			j=i+1;
	}
}

void strrev1(char *p,char *q)
{
	char t;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
}
