#include<stdio.h>
#include<string.h>

int main()
{
	char s[50];
	printf("Enter string\n");
	scanf("%s",s);
	
	int i = 0;
	int j = strlen(s)-1;

	while(i<j){
		if(s[i]!=s[j]){
			printf("Not palindrome\n");
			return 1;
		}
		i++;
		j--;
	}
	printf("Palindrome\n");
	
	return 0;
}
