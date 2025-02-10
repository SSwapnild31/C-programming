#include<stdio.h>
void main()
{
	int num,temp,pal=0,r;
	printf("Enter an number : ");
	scanf("%d",&num);
	
	for(temp=num; temp ; temp=temp/10)
	{
		r=temp%10;
		pal=pal*10+r;
	}
	if(num==pal)
	printf("num is palindrome..\n");
	else 
	printf("not palindrome..!\n");

}
