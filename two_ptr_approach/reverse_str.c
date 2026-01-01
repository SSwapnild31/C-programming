#include<stdio.h>
#include<string.h>

int main()
{
	char s[50];
	printf("Enter string : ");
	scanf("%s",s);

	printf("Before reverse : %s\n",s);
	
	int i = 0;
	int j = strlen(s)-1;

	while(i<j){
	   char ch = s[i];
		s[i] = s[j];
		s[j] = ch;
		i++;
		j--;
	}

	printf("After reverse : %s\n",s);

	return 0;
}
