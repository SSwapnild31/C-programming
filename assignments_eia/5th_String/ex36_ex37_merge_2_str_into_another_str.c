#include<stdio.h>

void merge(const char *,const char *,char *);
void main()
{
	char s1[20],s2[20],d[40];
	printf("Enter 1st string : ");
	scanf("%[^\n]",s1);
	printf("Enter 2nd string : ");
	scanf(" %[^\n]",s2);
	
	printf("Before : %s\n",d);
	
	merge(s1,s2,d);

	printf("After : %s\n",d);
}

void merge(const char *s1,const char *s2,char *d)
{
	int i=0,k=0;
	while(s1[i] && s2[i])
	{
		d[k++]=s1[i];
		d[k++]=s2[i];
		i++;
	}
	
	while(s1[i])
		d[k++]=s1[i++];
	
	while(s2[i])
		d[k++]=s2[i++];
}
