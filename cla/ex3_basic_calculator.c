#include<stdio.h>
#include<stdlib.h>

void main(int argc,char **argv)
{
	if(argc!=4)
	{
		printf("USAGE : ./a.out num1 op num2\n");
		return;
	}
	
	int num1,num2;

	num1=atoi(argv[1]);
	num2=atoi(argv[3]);
	
	switch(argv[2][0])
	{
		case '+' : printf("sum=%d\n",num1+num2);
			   break;
		case '-' : printf("sub=%d\n",num1-num2);
			   break;
		case '*' : printf("mul=%d\n",num1*num2);
			   break;
		case '/' : printf("div=%d\n",num1/num2);
			   break;
	}
}
