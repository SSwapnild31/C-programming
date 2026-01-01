#include<stdio.h>
#include<string.h>

void rev(char*,char*);
int main()
{
	char s[50];
	printf("Enter string\n");
	scanf("%[^\n]",s);
	//fgets(s,sizeof(s),stdin);	//if(s[j+1] == '\n')	cond required;

        printf("Before reverse : %s\n",s);

        int i = 0;
        int j = 0;

        while(s[j] != 0){
                if(s[j] == ' '){
			rev(&s[i],&s[j-1]);
			i = j + 1;
                }
                else if(s[j+1] == '\0'){
			rev(&s[i],&s[j]);
		}
		j++;
        }

        printf("After reverse : %s\n",s);

        return 0;
}

void rev(char *p, char *q)
{
	while(p<q){
	   char ch = *p;
		*p = *q;
		*q = ch;
		p++;
		q--;
	}
}
