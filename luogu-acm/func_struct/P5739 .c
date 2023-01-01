#include "stdio.h"
int main()
{
    int input,output;
    int jiechen(int );
    scanf("%d",&input);
    output= jiechen(input);
    printf("%d",output);
    return 0;
}
int jiechen(int n)
{
    if(n==1)
        return 1;
    else
        return n* jiechen(n-1);
}
