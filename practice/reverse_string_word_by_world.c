#include<stdio.h>
#include<string.h>

void strRev(char *start, char *end){
	while(start < end){
	   char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

int main()
{
	char s[50];
	printf("Enter string : ");
	scanf("%[^\n]",s);

	strRev(s, s+strlen(s)-1);
 	
	int i = 0;
	int j = 0;
	
	while(s[j] != 0){
		if(s[j] == ' '){
			strRev(&s[i], &s[j-1]);
			i = j+1;
		}
		else if(s[j+1] == '\0'){
			strRev(&s[i], &s[j]);
		}
		j++;
	}
	
	printf("%s\n",s);

	return 0;
}
