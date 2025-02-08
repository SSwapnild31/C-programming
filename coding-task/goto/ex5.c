#include<stdio.h>
void main()
{
	int num,r1,sum=0,i=0;
	printf("Enter three or more digit number : \n");
	scanf("%d",&num);
      L1:	
	r1 = num % 10;
	if(i%2==0)
		sum += r1;
	num = num / 10;
	i++;
	if(num>0)
		goto L1;
	printf("%d\n",sum);
}
