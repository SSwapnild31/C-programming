#include<stdio.h>
#include<string.h>

void delete(char *,char *);
void check_digit(char *);
void main()
{
	char s[50];
	printf("Enter string : ");
	scanf("%[^\n]",s);

	printf("before : %s\n",s);
	
	check_digit(s);
	
	printf("before : %s\n",s);
}

void check_digit(char *s)
{
	char *p=s;
	int flag=0,i,diff=0,j=0;
	int len=strlen(p);
	
	for(i=0;i<=len;i++)
	{
		if(!((p[i]>='0' && p[i]<='9')|| (p[i]>='a' && p[i]<='z') || (p[i]>='A' && p[i]<='Z') || (p[i]==' ' && p[i]=='\0')))
			flag=1;
		printf("flag=%d\n",flag);
		if(p[i]==' '|| p[i]=='\0' && flag)
		{
			delete(&p[j],&p[i+1]);
			flag=0;	
			i=j;
		}
		else if(p[i]==' ')
			j=i+1;
	}
}

void delete(char *p,char *q)
{
	while(*q)
		*p++=*q++;
	*p=*q;
}
