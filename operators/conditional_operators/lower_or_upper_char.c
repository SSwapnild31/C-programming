#include<stdio.h>
void main()
{
	char ch;
	printf("Enter an char:\n");
	scanf("%c",&ch);
	
	//ch<97 ? printf("character is capital\n") : printf("character is small\n"); 
	ch>>5&1 ? printf("character is small\n") : printf("character is capital\n");

}
