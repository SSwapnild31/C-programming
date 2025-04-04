#include<stdio.h>

void main(int argc,char **argv)
{
	printf("%d\n",argc);
	printf("%s\n",*argv);
	printf("%s\n",argv[1]);
	printf("%c\n",argv[0][0]);
	printf("%c\n",argv[1][1]);
}
