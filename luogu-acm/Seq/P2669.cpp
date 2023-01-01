#include<stdio.h>
int main()
{
	int day[1000]={0};
	for(int i=0;i<1000;i++)
	day[i]=(i+1);
	long int input=0;
	scanf("%ld",&input);
	long long int days=0;
	int n=0;
	for(;days<=input;n++)
	{
		days=days+day[n];
	}
	long long int output=0;
	for(long long int i=0;i<n-1;i++)
	{
		output=(long long int)day[i]*(i+1)+output;
	}
	long long int all=0;
	for(int i=0;i<n-1;i++)
	{
		all=all+day[i];
	}
	output=output+(input-all)*n;
	printf("%lld",output);
	return 0;
}

