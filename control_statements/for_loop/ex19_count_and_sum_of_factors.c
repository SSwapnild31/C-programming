#include<stdio.h>
void main()
{
	int num,i,sum=0,c=0;
	printf("Enter an number : \n");
	scanf("%d",&num);

						//printf("factors of %d : " , num);

	for(i=1;i<=num;i++)
		if(num%i==0)
		{
						//printf("%d ",i);
			c++;
			sum=sum+i;	
		}
	printf("count : %d\nsum : %d\n",c,sum);
}
