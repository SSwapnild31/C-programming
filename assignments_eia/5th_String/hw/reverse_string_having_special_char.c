#include<stdio.h>
#include<string.h>

void strrev1(char *,char *);
char *my_strchr(char *,char);
void main()
{
	char s[50];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	char *p,*q;
	p=s;
	
	printf("After : %s\n",s);

	while(q=my_strchr(p,' '))
		p=q+1;
	q=my_strchr(p,'\0');
	
	printf("After : %s\n",s);
}

char * my_strchr(char *p,char ch)
{
	int flag=0;
	int len=strlen(p);
	for(int i=0;i<=len;i++)
	{
		if(p[i]!=(p[i]>='0' && p[i]<='9') || (p[i]>='a' && p[i]<='z') || (p[i]>='A' && p[i]<='Z'))
			flag=1;
		if(p[i]==ch && flag)
		{
			strrev1(p,&p[i-1]);
			return &p[i];
		}
		else if(p[i]==ch)
			return &p[i];
	}
	return 0;
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
