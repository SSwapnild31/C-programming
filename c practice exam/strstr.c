#include<stdio.h>
#define MAX 50

const char *mystrstr(const char *p, const char *q){
	
	for(int i=0; p[i]; i++){
		if(p[i] == q[0]){
			int j;
			for(j=1; q[j]; j++){
				if(p[i+j] != q[j])	break;
			}

			if(q[j] == '\0'){
				return &p[i];
			}
		}
	}
	return "Not found!";
}

int main()
{
	char m[MAX], s[MAX];
	printf("Enter main string : ");
	scanf("%[^\n]",m);
	printf("Enter sub-string : ");
	scanf(" %[^\n]",s);
	
	printf("%s\n",mystrstr(m, s));

	return 0;
}
