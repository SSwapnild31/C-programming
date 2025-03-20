#include<stdio.h>

void print(const int *,int);
int odd_palindrome(int *,int);
void main()
{
	int a[6],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter array ele:\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	print(a,ele);
	odd_palindrome(a,ele);
	print(a,ele);
}

int odd_palindrome(int *p,int ele)
{
	int rev,r;
        for(int i=0;i<ele;i++)
        {
                if(p[i]%2!=0)
                {
        	        int temp=p[i];
                        for(rev=0;temp;temp/=10)
                        {
                                r=temp%10;
                                rev=rev*10+r;
                        }
                        if(p[i]==rev)
                        {
                                for(temp=i;temp<ele;temp++)
                                        p[temp]=p[temp+1];
                                i--;
                        	ele--;
                        }
                }
        }
	return ele;

}

void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}
