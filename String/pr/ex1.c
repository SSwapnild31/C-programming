#include<stdio.h>
void main()
{
	char s[3][5]={"abcd","efgh","ijkl"};
	
	printf("%u %c\n",s,*((&s[0]+1)+3));

}
