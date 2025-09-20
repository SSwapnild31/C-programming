#include<stdio.h>
#include<string.h>

int main()
{
	char s[50];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	
	char *p=s,*q,lw[20];
	int len=0,nlen;
	
	while(q=strchr(p,' '))
	{
		nlen=q-p;
		if(nlen>len)
		{
			len=nlen;
			strncpy(lw,p,nlen);
		}
		p=q+1;
	}
	
	nlen=strlen(p);
	if(nlen>len)
	{
		len=nlen;
		strncpy(lw,p,nlen);
	}
	
	printf("Longest word : %s\n",lw);
	return 0;
}
