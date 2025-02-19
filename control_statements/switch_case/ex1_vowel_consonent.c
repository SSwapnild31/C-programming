#include<stdio.h>
void main()
{
	char ch;
	printf("Enter char : ");
	scanf("%c",&ch);

	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'O':
		case 'U':
		case 'E':
		case 'I':
		case 'A':
			printf("Yes..it's vowel..\n");
			break;
		default:printf("it's a consonant..\n");
	}
}
