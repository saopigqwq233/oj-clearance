#include<stdio.h>
int main()
{
	void binbao(int);
	int n;
	scanf("%d",&n);
	binbao(n);
	return 0;
}
void binbao(int n)
{
	if(n==1)
	{
		printf("%d ",n);
	}
	if((n!=1)&&(n%2==0))
	{
		binbao(n/2);
		printf("%d ",n);
	}
	if((n!=1)&&(n%2!=0))
	{
		binbao(n*3+1);
		printf("%d ",n);
	}
}
