#include <stdio.h>
void Store(int n,int array[]);//把array[n]赋1
int main() {
    int n,arr[1001]={0};
    scanf("%d",&n);
    int des;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d",&des);
        Store(des,arr);
    }
    for (int i = 1; i < 1001; ++i)
    {
        if(arr[i]!=0)
            printf("%d ",i);
    }
    return 0;
}
void Store(int n,int array[])
{
    array[n]=1;
}
