#include<stdio.h>
void main()
{
	int num,r1,rev=0,r2,c=0,sum=0;
	printf("Enter three or more digit number : \n");
	scanf("%d",&num);
	
	//for reverse the original number 
      L1:	
	r1 = num % 10;
	num = num / 10;
	rev = rev *10 +r1;
	if(num>0)
		goto L1;
	
	//sum of reversed numbers alternate digits
      L2:
	r2 = rev % 10;
	rev = rev / 10;
	if(c%2==0)
		sum+=r2;
	c++;
	if(rev>0)
		goto L2;
	printf("sum of alternative num : %d\n",sum);
}
