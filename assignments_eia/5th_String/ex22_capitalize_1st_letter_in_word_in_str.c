#include<stdio.h>

void main()
{
	char s[30];
	printf("Entger sting :	");
	scanf("%[^\n]",s);
	
	int i;
	s[0]^=32;
	for(i=0;s[i];i++)
	{
		if(s[i]==' ')
			s[i+1]^=32;
	}
	printf("%s\n",s);
}
