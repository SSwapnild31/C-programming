#include<stdio.h>
//#include<stdlib.h>
void main()
{
	int num,i,temp,r,rev,sum,c,arm,cc=0,fact;
	char op;
while(1)
{
	printf("\nEnter an number : ");
	scanf("%d",&num);
	printf("\n1.Prime number\n2.Palindrome number\n3.Perfect number\n4.Armstrong number\n5.Strong number\n6.Exit\nEnter your choice : ");
	scanf(" %c",&op);

	switch(op)
	{
		case '1':
			for(i=2;i<num;i++)
			{
				if(num%i==0)
					break;
			}
			if(num==i)
				printf("\nPrime number \n");
			else
				printf("\nNot prime number..!\n");
			break;
		case '2': 
			for(temp=num,rev=0;temp;temp/=10)
			{
				r=temp%10;
				rev=rev*10+r;
			}
			if(num==rev)
				printf("\nPalindrome number \n");
			else
				printf("\nNot palindrome number..!\n");
			break;
		case '3':
			for(sum=0,i=1;i<num;i++)
			{
				if(num%i==0)
					sum+=i;
			}
			if(num==sum)
				printf("\nPerfect number \n");
			else
				printf("\nNot perfect number..!\n");
			break;
		case '4':
			for(temp=num,c=0;temp;temp/=10,c++);
									//printf("digits in number : %d\n",c);
			for(cc=c,temp=num,r=0,sum=0;temp;temp/=10)
			{
				r=temp%10;
				arm=1,c=cc;
									//printf("r : %d\n",r);
				while(c>0)
				{
					arm=arm*r;
					c--;
									//printf("arm : %d c : %d\n",arm,c);
				}
				sum=sum+arm;
									//printf("sum : %d\n",sum);
			}
			if(num==sum)
				printf("\nArmstrong number \n");
			else
				printf("\nNot armstrong number..!\n");
			break;
		case '5':
			for(sum=0,temp=num,r=0;temp;temp/=10)
			{
				r=temp%10;
				fact=1;
				while(r>0)
				{
					fact=fact*r;
									//printf("r : %d fact : %d\n",r,fact);
					r--;
				}
				sum=sum+fact;
									//printf("sum : %d\n",sum);	
			}
			if(num==sum)
				printf("\nStrong number \n");
			else
				printf("\nNot strong number..!\n");
			break;
		case '6':exit(0);
			 break;
		default :printf("\nwrong choice..\n");
	}
}
}
