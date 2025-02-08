#include<stdio.h>
void main()
{
	int num,pos,op,c=0;
	printf("Enter an number : \n");
	scanf("%d",&num);
     L1:
	printf("Enter bit position(0-31) : \n");
	scanf("%d",&pos);
	if(pos>=0 && pos<=31)
	{
		printf("1)Set bit\n2)Clear bit\n3)Compliment bit\nEnter your choice : \n");
		scanf("%d",&op);
		if(op==1)
		{
			num=num|1<<pos;
			printf("num=%d\n",num);
		}
		else if(op==2)
		{
			num=num&~(1<<pos);
			printf("num=%d\n",num);
		}
		else if(op==3)
		{	
			num=num^1<<pos;
			printf("num=%d\n",num);
		}
		else
		{
			printf("Unknown option\n");
		}
	}
	else
	{
		printf("Wrong bit pos...\nEnter again : \n");
		c++;
		if(c<3)
		{
			goto L1;
		}
	}

}
