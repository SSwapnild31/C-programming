#include<stdio.h>
void main()
{
	int num,temp,i,r;
	printf("Enter number : ");
	scanf("%d",&num);
	
	for(temp=num;temp;temp=temp/10)
	{
		r=temp%10;
		for(i=2;i<r;i++)
		{	
			if(r%i==0)
				break;
		}
		if(r==i)
			printf("%d ",r);
	}
	printf("\n");
}
