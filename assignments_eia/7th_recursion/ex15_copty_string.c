#include<stdio.h>
#include<stdlib.h>

void my_strncpy(char *,char *,int);
void main()
{
	char *s,*d;
	int n;
	
	s=malloc(30);
	d=malloc(30);
	
	printf("Enter string : ");
	scanf("%[^\n]",s);
	printf("Enter n : ");
	scanf("%d",&n);
	
	printf("before d : %s\n",d);
	
	my_strncpy(d,s,n);
	
	printf("after d : %s\n",d);
}

void my_strncpy(char *d, char *s,int n)
{
	static int c;
	if(c==n)
		return ;
	*d++=*s++;
	c++;
	my_strncpy(d,s,n);
}
