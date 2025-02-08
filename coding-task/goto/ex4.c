#include<stdio.h>
void main()
{
	int num,ld,sum=0;
	printf("Enter an number : \n");
	scanf("%d",&num);
      L1:
	ld = num % 10;
	if(ld%3==0)
		sum += ld;
	num = num / 10;
	if(num>0)
		goto L1;
	printf("%d\n",sum);
}
