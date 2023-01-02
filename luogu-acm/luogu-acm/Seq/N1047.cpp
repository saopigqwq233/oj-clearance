#include "stdio.h"
#include "stdlib.h"
int main()
{
    int l = 0,m,*pl,time=0,u,v;
    scanf("%d %d",&l,&m);
    pl = (int*)malloc(4 * (l+1));
    for (int i = 0; i < l+1; ++i)
    {
        pl[i]=0;
    }
    for (int i = 0; i < m; ++i)
    {
        scanf("%d %d",&u,&v);
        for (int j = u; j<=v; ++j)
        {
            pl[j]=1;
        }
    }
    for (int i = 0; i < l+1; ++i)
    {
        if(pl[i]==0)time++;
        if(pl[i]==1)continue;
    }
    printf("%d",time);
    free(pl);
    return 0;
}
