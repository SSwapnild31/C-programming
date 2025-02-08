#include<stdio.h>
void main()
{
	int num,ld=0,sum=0,c=0;
	printf("Enter an number : \n");
	scanf("%d",&num);
     L1:
	
	ld = num % 10;
	num = num / 10;
	sum+=ld;
	c++;
	if(c<3)
		goto L1;	
	printf("%d\n",sum);
}
