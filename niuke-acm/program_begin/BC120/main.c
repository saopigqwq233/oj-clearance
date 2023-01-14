//BC120
#include <stdio.h>
int main()
{
    int erduan(int ,int *);//检测是否是二段
    int n,rig;
    scanf("%d",&n);
    if(n==0)
        return 0;
    else
    for (int i = 2; ; ++i)
    {
        rig=i*n%10;
        if(erduan(i*n,&rig))
        {
            printf("%d",i*n);
            break;
        }
    }
    return 0;
}
int erduan(int num,int *rig)
{

}