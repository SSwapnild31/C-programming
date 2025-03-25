#include<stdio.h>

int find_strstr(const char*,const char*);
void main()
{
	char m[50],s[30];
	printf("Enter main string : ");
	scanf("%[^\n]",m);
	printf("Enter sub string : ");
	scanf(" %[^\n]",s);
	
	int res=find_strstr(m,s);
	if(res)
		printf("yes..");
	else
		printf("no..!");
}

int find_strstr(const char *m,const char *s)
{
	int j=0,k=0;
	for(int i=0;m[i];i++) 
	{
		if(m[i]==s[j])
		{
			for(k=i+1,j=1;s[j];j++,k++)		//here no need to take extra k, it will also works on given if condn
			{
				if(m[k]!=s[j])			//if(m[i+j]!=s[j])	also works 
					break;
			}	
			if(s[j]=='\0')
				 return 1;
			j=0;
		}
	}
	return 0;	
}
