#include<stdio.h>
#include<stdlib.h>
#define size 5

struct vector
{
	int id;
	char name[20];
};

int count_vector(struct vector **);
void rev_prime_fun(struct vector **);

void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("USAGE : ./a.out fileename..\n");
		return ;
	}
	
	FILE *fp = fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file not present..!\n");
		return ;
	}

	struct vector *p[size];
	int i,count;

	for(i=0;i<size;i++)
		p[i]=malloc(sizeof(struct vector));
	
	i=0;
	while(fscanf(fp,"%d %s",&p[i]->id,p[i]->name)!=EOF)
		i++;
	
	printf("---original data---\n");
	for(i=0;i<size;i++)
		printf("%d %s\n",p[i]->id, p[i]->name);
	
	count = count_vector(p);
	
	printf("\ncount of uppercase names : %d\n",count);
	
	rev_prime_fun(p);
	
	printf("\n---after prime id check---\n");
	for(i=0;i<size;i++)
		printf("%d %s\n",p[i]->id, p[i]->name);
	
	fclose(fp);
}

void rev_prime_fun(struct vector **p)
{
	for(int i=0,j=0;i<size;i++)
	{
		int num = p[i]->id;
		for(j=2;j<num;j++)
		{
			if(num%j==0)
				break;
		}
		if(num==j)
		{
			char *s=p[i]->name,*q=s;
			while(*q)
				q++;
			q--;
			while(s<q)
			{
				char ch = *s;
				*s = *q;
				*q = ch;
				s++;
				q--;
			}
		}
	}
	
}

int count_vector(struct vector **p)
{
	static int i = 0,c = 0;

	if(i>=size)
	{
		int res = c;
		c = 0;
		i = 0;
		return res;
	}
	if(p[i]->name[0]>='A' && p[i]->name[0]<='Z')
		c++;
	i++;
	return count_vector(p);
}
