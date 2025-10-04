#include<stdio.h>

void substr(char*, char*);
void rev(char*, char*);

void main()
{
	char m[30], s[30];
	printf("Enter main string : ");
	scanf("%[^\n]",m);
	printf("Enter sub string : ");
	scanf(" %[^\n]",s);
	
	printf("Before : %s\n",m);
	
	substr(m,s);

	printf("After : %s\n",m);
}

void substr(char *p, char *q)
{
	int j;
	for(int i=0;p[i];i++)
	{
		if(p[i]==q[0])
		{
			for(j=1;q[j];j++)
			{
				if(p[i+j]!=q[j])
					break;
			}
			if(q[j]=='\0')
			{
				rev(&p[i],&p[i+j]-1);
				i=i+j;
			}
		}
	}
}

void rev(char *p, char *q)
{
	char ch;
	while(p<q)
	{
		ch = *p;
		*p = *q;
		*q = ch;
		p++;
		q--;
	}
}
