#include <stdio.h>

void main()
{
	/*const int ary[4] = {1,2,3,4};
	int *p = ary+3;
	*p = 5;
	ary[3] = 6;
	printf("%d",ary[3]);*/

	/*char *p = "Hai friends",  *p1 = p;
	while(*p!='\0');
	++*p++;
	printf("%s  %s\n",p,p1);*/
	
	/*char *x = "VECTOR";
	printf("%s\n",x+3);
	printf("%d\n"+1,123456);*/
	
	/*char a[ ] = "abcdefgh";
	int *ptr = a;
	printf("%x  %x\n",ptr[0],ptr[1]);*/
	
	/*char *str = "hello, world\n";
	char *strc = "good morning\n";
	strcpy(strc, str);
	printf("%s\n", strc);
	return 0;*/

	char *str = "hello world";
	char strc[50] = "good morning india\n";
	strcpy(strc, str);
	printf("%s\n", strc);
	return 0;
}



























/*void foo(int*);
int main()
{
	int i = 10,j=20,*p = &i;
	foo(p++);
}
void foo(int *p)
{
	printf("%d\n", *p);
}*/
