#include<stdio.h>
void main()
{
	int num,r1,r2,c=0;
	printf("Enter an number : \n");
	scanf("%d",&num);
     L1:
	r1 = num % 10;
	if(c==0)
	 r2=r1;
	num = num / 10;
	c++;
	if (c<2)
		goto L1;
	printf("%d\n",r2*r1);
}
