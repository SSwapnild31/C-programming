#include<stdio.h>
void main()
{
	int num,r1,count=0;
	printf("Enter an number : \n");
	scanf("%d",&num);
     L1:
	r1=num%10;
	//printf("%d\n",r1);
	num=num/10;
	//printf("%d\n",num);
	if(r1%2!=0)
		count++;
	if(num>0)
		goto L1;
	printf("odd digit in given num : %d\n",count);
}
