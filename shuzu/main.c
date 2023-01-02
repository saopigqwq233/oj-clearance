//P2550
//输入买了几张彩票
//输入中将7个票号
//输入买的彩票的7个号
//输出几个奖的数量，特，123456
/*#include "stdio.h"
#define N 7//若以后票号个数有改
enum {
    no=0,six,five,four,three,two,one,super
};
int main()
{
    int compare_same(int *,int *);//有几位相同就返回几
    int q;//存储几张彩票
    int bet_win[N];//获奖全票号
    int bet_buy[N];//买的票号
    int *buy,*win;
    buy=bet_buy;
    win=bet_win;
    int gold[8]={0};
    scanf("%d",&q);
    for (int i = 0; i < N; ++i)
    {
        scanf("%d",&bet_win[i]);
    }
    for (int i = 0; i < q; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            scanf("%d",&bet_buy[j]);
        }
        switch (compare_same(buy,win)) //函数返回的数
        {
            case no:
                break;
            case six:gold[six]++;
                break;
            case five:gold[five]++;
                break;
            case four:gold[four]++;
                break;
            case three:gold[three]++;
                break;
            case two:gold[two]++;
                break;
            case one:gold[one]++;
                break;
            case super:gold[super]++;
        }
    }
    for (int i = super; i>=six ; --i)
    {
        printf("%d ",gold[i]);
    }
    return 0;
}
int compare_same(int *buy,int *win)
{
    int how_many=0;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if(buy[j]==win[i])how_many++;
        }
    }
    //printf("%d",*buy);
    return how_many;
}*/
//P2615
//要么在这个数右上角，要么在这个数下面
/*
#include<stdio.h>
#include "stdlib.h"
int a[40][40]={0};
int main()
{
    int N;
    scanf("%d",&N);
    int x=1,y=(N+1)/2;//x控制行，y控制列；
    for (int i = 1; i <=N*N; ++i)
    {
        a[x][y]=i;
        //先判断是不是在第一行,最后一列
        if((x==1)&&(y!=N))
        {
            x=N;
            y=y+1;
        }
        else if((y==N)&&(x!=1))
        {
            y=1;
            x=x-1;
        }
        else if((x==1)&&(y==N))
        {
            x=x+1;
        }
        else if((x!=1)&&(y!=N)&&(!a[x-1][y+1]))
        {
            x=x-1;
            y=y+1;
        }
        else if((x!=1)&&(y!=N)&&(a[x][y]))
        {
            x=x+1;
            //printf("%d\n",i);
        }
    }
    for (int i = 1; i <=N ; ++i)
    {
        for (int j = 1; j <=N ; ++j)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
//p5730
/*#include "stdio.h"
int output[10]={0};
int main()
{
    int left,right,atou;
    scanf("%d %d",&left,&right);
    for (int i = left; i <=right ; ++i)
    {
        atou=i;
        while (atou>0)
        {
            output[atou%10]++;
            atou/=10;
        }
    }
    for (int i = 0; i < 10; ++i)
    {
        printf("%d ",output[i]);
    }
    return 0;
}*/
//P2141
/*#include "stdio.h"
#include "stdlib.h"
#define ADD(x,y) (x)+(y)
int cmpfunc (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}
int main()
{
    int n,ans=0,lable;
    scanf("%d",&n);
    int *stor= malloc(sizeof (int )*n);
    for (int i = 0; i <n; ++i)
    {
        scanf("%d",&stor[i]);
    }
    qsort(stor,n,4, cmpfunc);
    //printf("11");
    for (int i = 2; i < n; ++i)
    {
        //printf("aa  ");
        if(stor[i]> stor[i-1]*2)
        {
            continue;
        }
        if(stor[i]>(stor[i-1]+stor[i-2]))
        {
            continue;
        }
        for (int j = i-1; j >0 ; --j)
        {
            for (int k = j-1; k >=0 ; --k)
            {
                lable=0;
                //printf("aa");
                if(ADD(stor[j],stor[k])== stor[i])
                {
                    ans++;
                    lable=1;
                    break;
                }
            }
            if(lable==1)
                break;
        }
    }*/
/*
    printf("%d",ans);
    //printf("aa");
    free(stor);
    return 0;
}*/
//P1614
/*
#include "stdio.h"
#include "stdlib.h"
int main()
{
    int n,m,ans=0,di;//n个烦心事，连续m个烦心事怎么样
    scanf("%d %d",&n,&m);
    int *N= malloc(sizeof (int )*n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d",&N[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        ans+=N[i];
    }
    for (int i = 0; i < n-m+1; ++i)
    {
        di=0;
        for (int j = i;j<m+i ; ++j)
        {
            di+=N[j];
        }
        if(di<ans)ans=di;
    }
    printf("%d",ans);
    free(N);
    return 0;
}
*/
//P2911
/*#include "stdio.h"
#include "stdlib.h"
#define ADD(S1,S2,S3) (S1)+(S2)+(S3)
int main()
{
    int *arr,s1,s2,s3;
    scanf("%d %d %d",&s1,&s2,&s3);
    arr= malloc(sizeof (int )* (1+ADD(s1,s2,s3)));
    for (int i = 0; i < (1+ ADD(s1,s2,s3)); ++i)
    {
        arr[i]=0;
    }
    for (int i = 1; i <=s1 ; ++i)
    {
        for (int j = 1; j <=s2 ; ++j)
        {
            for (int k = 1; k <=s3 ; ++k)
            {
                arr[i+j+k]++;
            }
        }
    }
    int max=0,lable=0;
    for (int i = 1; i < (ADD(s1,s2,s3)+1); ++i)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            lable=i;
        }
    }
    printf("%d",lable);
    return 0;
}*/
//P1161
/*
#include "stdio.h"
int arr[2000001]={0};
void shut_down(double a,int t)
{
    //printf("%f",a);
    for (int i = 1; i <=t; ++i)
    {
        //printf("a\n");
        if(arr[(int)(a*i)]==0)
        {
            arr[(int) (a * i)] = 1;
        }
        else
        {
            arr[(int) (a * i)] = 0;
        }
    }
}
int main()
{
    int n,t;
    double a;
    scanf("%d",&n);
    //getchar();
    for (int i = 0; i < n; ++i)
    {
        scanf("%lf %d",&a,&t);
        //printf("a=%f\n",a);
        //printf("a\n");
        shut_down(a,t);
    }
    for (int i = 1; i <2000001 ; ++i)
    {
        if(arr[i]==1)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}*/
//P5732
/*
#include "stdio.h"
int a[21][21]={0};
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; ++i) //初始化，让每一行的最左/右为1
    {
        a[i][1]=1;
        a[i][i]=1;
    }
    for(int i=2;i<=n;i++)
    {
        for (int j = 2; j<= i; ++j)
        {
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }
    for (int i = 1; i <=n ; ++i)
    {
        for (int j = 1; j <=i ; ++j)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
#include "stdio.h"
#define BLOK 100
typedef struct {
    int x;//火把横坐标
    int y;//火把纵坐标
}huoba_;
typedef struct {
    int x;//萤石的横坐标
    int y;//萤石的纵坐标
}yingshi_;
//暗是0，亮是非0
int main()
{
    int N[BLOK+4][BLOK+4]={0};
    void huoba_zhaoliang(int N[BLOK+4][BLOK+4],int,int);
    void yinkgshi_zhaoliang(int N[BLOK+4][BLOK+4],int,int);
    int ghost(int N[BLOK+4][BLOK+4],int);
    int n;//n*n的面积
    int m,k;//m个火把，k个萤石
    scanf("%d %d %d",&n,&m,&k);
    huoba_ huoba;
    yingshi_ yingshi;
    for (int i = 0; i < m; ++i)
    {
        scanf("%d %d",&huoba.x,&huoba.y);
        huoba_zhaoliang(N,huoba.x+1,huoba.y+1);
    }
    for (int i = 0; i < k; ++i)
    {
        scanf("%d %d",&yingshi.x,&yingshi.y);
        yinkgshi_zhaoliang(N,yingshi.x+1,yingshi.y+1);
    }
    printf("%d", ghost(N,n));
    return 0;
}
void huoba_zhaoliang(int N[BLOK+4][BLOK+4],int x,int y)
{
    N[x][y]=1;
    N[x][y-2]=N[x][y-1]=N[x][y+1]=N[x][y+2]=N[x][y];
    N[x-2][y]=N[x-1][y]=N[x+1][y]=N[x+2][y]=N[x][y];
    N[x-1][y-1]=N[x-1][y+1]=N[x+1][y-1]=N[x+1][y+1]=N[x][y];
}
void yinkgshi_zhaoliang(int N[BLOK+4][BLOK+4],int x,int y)
{
    N[x][y]=1;
    for (int i = x-2; i <=x+2 ; ++i)
    {
        for (int j = y-2; j <=y+2 ; ++j)
        {
            N[i][j]=1;
        }
    }
}
int ghost(int N[BLOK+4][BLOK+4],int n)
{
    int ans=0;
    for (int i = 2; i <=(n+1); ++i)
    {
        for (int j = 2; j <=(n+1) ; ++j)
        {
            if(N[i][j]==0)ans++;
        }
    }
    return ans;
}
*/
//P1320
/*
#include "stdio.h"
#include "stdlib.h"
int main()
{
    //输入方框规格
    int blank_limit;
    scanf("%d",&blank_limit);
    int input;//存放0和1交替的
    int all_input=0;//存放input的和，input的和应该和blank_limit相同
    int numberofprint=0;//记录打印了第几个数
    for (;all_input<blank_limit*blank_limit;)
    {
        scanf("%d",&input);
        all_input+=input;
        for (int j = 0; j < input; ++j)
        {
            printf("0");
            numberofprint++;
            if(numberofprint%blank_limit==0)
                printf("\n");
        }
        if(all_input==blank_limit*blank_limit)break;
        scanf("%d",&input);
        all_input+=input;
        for (int i = 0; i < input; ++i)
        {
            printf("1");
            numberofprint++;
            if(numberofprint%blank_limit==0)
                printf("\n");
        }
        if(all_input==blank_limit*blank_limit)break;
    }
    return 0;
}
*/
//p1320(不会)
/*#include "stdio.h"
#include "string.h"
int main()
{
    int blank_limit=0;//表的边长
    char a[201];
    gets(a);
    blank_limit= strlen(a);
    int guige=blank_limit*blank_limit;
    printf("%d ",blank_limit);//输出表长
    char square[blank_limit][blank_limit];
    //给表赋元素
    for (int i = 0; a[i]!='\0'; ++i)
    {
        square[0][i]=a[i];
    }
    //printf("aa");
    for (int i = 1; i < blank_limit; ++i)
    {
        //printf("aa\n");
        for (int j = 0; j <blank_limit; ++j)
        {
            //printf("a1");
            scanf("%c",&square[i][j]);
            //printf("%d",square[0][3]);
        }
        getchar();//吸收最后的‘\n’
    }
    //存储每次的0，1数量
    int numberof0=0,numberof1=0;
    //开始遍历，i为第几个数
    int i=0;
    for (;i<guige;)
    {
        for (;square[i/blank_limit][i%blank_limit]=='0'; ++i)
        {
            numberof0++;
            if(i==guige-1)break;
        }
        printf("%d ",numberof0);
        numberof0=0;
        if(i==guige-1)break;
        for(;square[i/blank_limit][i%blank_limit]=='1';i++)
        {
            numberof1++;
            if(i==guige-1)break;
        }
        printf("%d ",numberof1);
        numberof1=0;
        if(i==guige-1)break;
    }
    return 0;
}*/
/*#include "stdio.h"
#include "string.h"
char input[10][10];//转换前正方形
char trans[10][10];//转换后正方形
int limit;//正方形边长
int main()
{
    int func1(char in[10][10],char out[10][10],int edge);
    int func2(char in[10][10],char out[10][10],int edge);
    int func3(char in[10][10],char out[10][10],int edge);
    int func4(char in[10][10],char out[10][10],int edge);
    int func5(char in[10][10],char out[10][10],int edge);
    int func6(char in[10][10],char out[10][10],int edge);
    int func7(char in[10][10],char out[10][10],int edge);
    scanf("%d",&limit);
    for (int i = 0; i < limit; ++i)
    {
        for (int j = 0; j < limit; ++j)
        {
            scanf("%c",&input[i][j]);
        }
        getchar();
    }
    for (int i = 0; i < limit; ++i)
    {
        for (int j = 0; j < limit; ++j)
        {
            scanf("%c",&trans[i][j]);
        }
        getchar();
    }
    if(func1(input[10][10],trans[10][10],limit))
        printf("1");
    else if(func2(input[10][10],trans[10][10],limit))
        printf("2");
    else if(func3(input[10][10],trans[10][10],limit))
        printf("3");
    else if(func4(input[10][10],trans[10][10],limit))
        printf("4");
    else if(func5(input[10][10],trans[10][10],limit))
        printf("5");
    else if(func6(input[10][10],trans[10][10],limit))
        printf("6");
    else
        printf("7");
    return 0;
}
int func1(char in[10][10],char out[10][10],int edge)
{
    int ret=1;//若有不相等返回0，相等返回1
    int number=0;
    while (number<edge*edge)
    {
        if(in[number/edge][number%edge]!=out[number%edge][edge-1-(number/edge)])
        {
            ret=0;
            break;
        }
        number++;
    }
    return ret;
}
int func2(char in[10][10],char out[10][10],int edge)
{
    int ret=1;//若有不相等返回0，相等返回1
    int number=0;
    while (number<edge*edge)
    {
        if(in[number/edge][number%edge]==out[edge-1-(number/edge)][edge-1-(number%edge)])
        {
            ret=0;
            break;
        }
        number++;
    }
    return ret;
}
int func3(char in[10][10],char out[10][10],int edge)
{
    int ret=1;
    int number=0;
    while (number<edge*edge)
    {
        if(in[number/edge][number%edge]==out[edge-1-(number%edge)][number/edge])
        {
            ret=0;
            break;
        }
        number++;
    }
    return ret;
}
int func4(char in[10][10],char out[10][10],int edge)
{
    int ret=1;
    int number=0;
    while (number<edge*edge)
    {
        if(in[number/edge][number%edge]==out[number/edge][edge-1-(number%edge)])
        {
            ret=0;
            break;
        }
        number++;
    }
    return ret;
}
int func5(char in[10][10],char out[10][10],int edge);
int func6(char in[10][10],char out[10][10],int edge);
int func7(char in[10][10],char out[10][10],int edge);*/
#include "stdio.h"
//定义一个数组，存储五名同学的三门成绩
//求每名学生总成绩 平均成绩
//求每门学科总成绩 平均成绩
//定义一个二维数组arr[5][4],5代表5个学生的成绩，4代表3门成绩和总成绩
double arr[5][4]={{90,80,70,0},{80,70,60,0}
,{50,70,90,0},{60,70,80,0},{90,90,90,0}};
//定义存储3门成绩的总成绩的数组
double add_all[3]={0};
int main()
{
    //先算五名学生的分别的总成绩存储到arr[i][3];
    for (int i = 0; i <5 ; ++i)//i来控制第i+1名学生，j用来控制第j+1个科目
    {
        for (int j = 0; j < 3; ++j)//一名同学的3门总成绩
        {
            arr[i][3]+=arr[i][j];
        }
    }
    //再算三门学科的总成绩,存储到add_all[i]
    for (int i = 0; i <3 ; ++i)//i控制第i+1个科目，j控制第j+1个学生
    {
        for (int j = 0; j < 5; ++j)
        {
            add_all[i]+=arr[j][i];
        }
    }
    //输出
    //输出每名学生的各成绩
    for (int i = 0; i < 5; ++i) //5名学生，故<5
    {
        printf("第%d名学生总成绩为:%.1lf，平均成绩为%.1lf\n",i+1,arr[i][3],arr[i][3]/3);
    }
    //输出三门课的情况
    for (int i = 0; i < 3; ++i) //三门课，故<3
    {
        printf("第%d门课的总成绩:%.1lf，平均成绩:%.1lf\n",i+1,add_all[i],add_all[i]/5);
    }
    return 0;
}
