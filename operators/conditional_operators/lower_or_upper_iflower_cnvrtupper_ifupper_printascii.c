#include<stdio.h>
void main()
{
	char ch;
	
	printf("Enter an alphabet\n");
	scanf("%c",&ch);
	
	ch>>5&1 ? printf("lower case\nupper case is : %c\n",ch-32) : printf("upper case\nascii of ch is : %d \n",ch);
 

}
