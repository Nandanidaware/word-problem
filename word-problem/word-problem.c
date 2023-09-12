/*//N PRIME NUMBER

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		int c=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c=c+1;
			}
		}
		if(c==2)
		{
			printf("%d\n",i);
		}
	}
	return 0;
	
}


//SUM OF N PRIME NUMBERS

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	int sum=0;
	for(int i=1;i<=N;i++)
	{
		int c=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c=c+1;
			}
		}
		if(c==2)
		{
			sum=sum+i;
		}
	}
	printf("%d",sum);
	return 0;
}	
*/	

//PRIME FACTORS OF GIVEN N NUMBERS

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=2;i<=N;i++)
	{
		int a=i;
		for(int j=2;j<=a;a=a/j)
		{
			if(a%j==0)
			{
				printf("%d\n",j);
			}
			else
			{
				j++;
			}
		}
	}
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	

