#include<stdio.h>
void main()
{
	char ch,*cp;
	int i,*ip;
	float f,*fp;
	
	printf("%ld %ld\n",sizeof(ch),sizeof(cp));
	printf("%ld %ld\n",sizeof(i),sizeof(ip));
	printf("%ld %ld\n",sizeof(f),sizeof(fp));
	
	printf("%ld\n",sizeof(&ch));
	printf("%ld\n",sizeof(&i));
	printf("%ld\n",sizeof(&f));
}
