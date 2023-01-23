//BC120
/*
#include <stdio.h>
int main()
{
    int erduan(long int ,int ,int );//检测是否是二段
    long int n;
    while (scanf("%ld", &n)!=EOF)
    {
        if (n == 0)
            return 0;
        else
        {
            for (int i = 2;; ++i)
            {
                if (erduan(i * n/10, i * n % 10,0))
                {
                    printf("%ld:%ld\n",n, i * n);
                    break;
                }
            }
        }
    }
    return 0;
}
int erduan(long int num,int one,int two)
{
    //printf("aa");
    if(num%10==one&&two==0)
        return erduan(num/10,one,two);
    //两数分界
    else if(num%10>one&&)
    else
    {
        return 0;
    }
}*/
#include "stdlib.h"
#include "stdio.h"
int main()
{
     int i=1234567;
    char string[100];
    printf("%s", itoa(i,string,10));
    return 0;
}