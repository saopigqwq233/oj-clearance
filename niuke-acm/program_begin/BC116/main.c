#include <stdio.h>
#include "windows.h"
//递归！！！
int Add_AS(int );
int main()
{
    int input;
    scanf("%d",&input);
    printf("%d", Add_AS(input));
    return 0;
}
int Add_AS(int i)
{
    if(i%10==i)
        return i%2;
    else
        return (i%10%2)+ 10*Add_AS(i/10);
}