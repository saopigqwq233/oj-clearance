#include<stdio.h>
int main()
{
	void print1(int);
	void print2(int);
	int a;
	scanf("%d",&a);
	print1(a);
	printf("\n");
	print2(a);
	return 0;	
}
void print1(int a)
{
	int te=1;
	for(int i=1;i<=a*a;i++)
	{
		printf("%02d",i);
		te++;
		if(i%a==0)printf("\n");
	}
}
void print2(int a)
{
	int te=1;
	for(int i=1;i<=a;i++)
	{
		for(int j=a-i;j>0;j--)
		{
			printf("  ");
		}
		for(int k=i;k>0;k--)           
		{
			printf("%02d",te);
			te++;
			if(k==1)printf("\n"); 
		}
	}
}
