#include <stdio.h>
int IsEven(int n);
int main()
{
    int nums=0;
    for (int i = 100; i <=999 ; ++i)
    {
        if(IsEven(i))
            nums++;
    }
    printf("%d",nums);
    return 0;
}
int IsEven(int n)
{
    int flag=0;
    for (int i = 2; i < n; ++i)
    {
        if(n%i==0)
        {
            flag=1;//如果中间出现可以整除n的数，让flag=1break;
        }
    }
    if(flag==0)
        return 1;
    else
        return 0;
}