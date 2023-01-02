//P5736
//https://www.luogu.com.cn/problem/P5461
//质数不包括1
/*
#include <stdio.h>
int Iseven(int n)
{
    int flag=0;
    for (int i = 2; i < n; ++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0&&n!=1)
        return 1;
    else
        return 0;
}
int main()
{
    int input,num;
    scanf("%d",&num);
    for (int i = 0; i < num; ++i)
    {
        scanf("%d",&input);
        if(Iseven(input))
            printf("%d ",input);
    }
    return 0;
}
*/
//P5738
//https://www.luogu.com.cn/problem/P5738
/*
#include "stdio.h"
#include "stdlib.h"
float averofJ(float J[],float m)//打分数组和评委数量为参数
{
    float max,min,sum=0;
    max=min=J[0];
    for (int i = 0; i < m; ++i)
    {
        sum+=J[i];
        if(J[i]>max)
            max=J[i];
        if(J[i]<min)
            min=J[i];
    }
    return (sum-max-min)/(m-2);
}
int main()
{
    int n;//n名同学
    int m;//m名评委
    scanf("%d %d",&n,&m);
    float *Judge=(float *) malloc(sizeof (float )*m);//存储m名评委对某一同学的打分
    float *aver=(float *) malloc(sizeof (float )*n);//存储n名同学的平均分
    for (int i = 0; i < n; ++i)//对n名同学打分
    {
        for (int j = 0; j < m; ++j) //m名评委打分
        {
            scanf("%f",&Judge[j]);
        }
        aver[i]= averofJ(Judge,m);
    }
    float max=aver[0];
    for (int i = 0; i < n; ++i)
    {
        if(max<aver[i])
            max=aver[i];
    }
    printf("%.2f",max);
    return 0;
}
*/

