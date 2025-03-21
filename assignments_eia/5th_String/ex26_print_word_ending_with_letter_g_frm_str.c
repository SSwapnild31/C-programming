#include<stdio.h>

void find_word(const char *);
void main()
{
	char s[30];
	printf("Enter main string : ");
	scanf("%[^\n]",s);
	
	find_word(s);
}

void find_word(const char *p)
{
	int i=0,start=0,end=0;
	while(p[i]!='\0')
	{
		while(p[i]==' ')
			i++;
		start=i;
		
		while(p[i]!=' ' && p[i]!='\0')
		{
			end=i;
			i++;
		}
		
		if(p[end]=='g' || p[end]=='G')
		{
			for(int j=start;j<=end;j++)
				printf("%c",p[j]);
			printf(" ");
		}
	}
	printf("\n");
}	
