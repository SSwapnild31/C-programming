#include<stdio.h>

int my_atoi(char *);
void main(int argc,char **argv)
{
	int num;
	num=my_atoi(argv[1]);
	printf("num : %d\n",num);
}

int my_atoi(char *p)
{
	int i,num=0;
	if(p[0]=='+' || p[0]=='-')
		i=1;
	else
		i=0;
	for(;p[i];i++)
	{
		if(p[i]>='0' && p[i]<='9')
			num=num*10+p[i]-48;
		else
			break;
	}	
	if(p[0]=='-')
		num=-num;
	
	return num;
}
