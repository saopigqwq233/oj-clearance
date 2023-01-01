#include<stdio.h>
long long int print(long long int x);
int main()
{
	long long int a,b,c;
	scanf("%lld %lld %lld",&a,&b,&c);
	print(a);
	print(b);
	print(c);
	return 0;
 } 
long long int print(long long int x)
{
	printf("%8lld ",x);
	return x;
}
