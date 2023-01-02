#include<stdio.h>
int main()
{
	int multiple(int);
	int x;
	scanf("%d",&x);
	long long int out=0;
	for(int i=1;i<=x;i++)
	{
		out=out+multiple(i);
	}
	printf("%ld",out);
	return 0;
}
int multiple(int i)
{
	long long int out;
	if(i!=1)
	out=i*multiple(i-1);
	if(i==1)
	out=1;
	return out;
}
