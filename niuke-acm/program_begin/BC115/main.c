#include <stdio.h>
//递归吧
int main()
{
    long long int GreatDivi(long long int ,long long int );
    long long int LeastMul(long long int ,long long int );
    long long int num1,num2;
    scanf("%lld %lld",&num1,&num2);
    if(num1<num2)
    {
        long long int temp=num2;
        num2=num1;
        num1=temp;
    }
    printf("%lld", GreatDivi(num1,num2)+ LeastMul(num1,num2));
    return 0;
}
long long int GreatDivi(long long int a,long long int b)
{
    if(b==0)
        return a;
    else
        return GreatDivi(b,a%b);
}
long long int LeastMul(long long int a,long long int b)
{
    return a*b/ GreatDivi(a,b);
}
