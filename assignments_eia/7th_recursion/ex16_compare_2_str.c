#include<stdio.h>
#include<stdlib.h>

int my_strncmp(char *,char *,int);
void main()
{
	char *s,*d;
	int n;
	
	s=malloc(30);
	d=malloc(30);
	
	printf("Enter 1st string : ");
	scanf("%[^\n]",s);
	printf("Enter 2nd string : ");
	scanf(" %[^\n]",d);

	printf("Enter n : ");
	scanf("%d",&n);
	
	if(my_strncmp(d,s,n))
		printf("not matching..!\n");
	else
		printf("string is same\n");
}

int my_strncmp(char *d, char *s,int n)
{
	static int c,flag=0;
	if(c==n)
		return flag;
	if(*d!=*s)	
		return flag=1;
	c++;
	my_strncmp(d+1,s+1,n);
}
