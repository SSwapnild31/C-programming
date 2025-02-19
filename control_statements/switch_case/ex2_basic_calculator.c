#include<stdio.h>
void main()
{
	int n1,n2,n3;
	char op;
	printf("Enter n1 and n2 : ");
	scanf("%d%d",&n1,&n2);

	printf("+ Add\n- Sub\n* Mul\n/ Div\nEnter the option : ");
	scanf(" %c",&op);

	switch(op)
	{
		case '+':
			 n3=n1+n2;
			 printf("addition : %d\n",n3);
			 break;
		case '-':
			 n3=n1-n2;
			 printf("subtraction : %d\n",n3);
			 break;
		case '*':
			 n3=n1*n2;
			 printf("multiplication : %d\n",n3);
			 break;
		case '/':
			 n3=n1/n2;
			 printf("division : %d\n",n3);
			 break;
		default:printf("invalid input\n");
	}
}
