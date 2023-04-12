#include <stdio.h>
void print_empty_3();//输出3个空格
void print_level(int l);//打印矩形第l行
int main()
{
    //不妨把圣诞树的每片三角形看作是 6X3 的矩形
    //把矩形看作一个元素，那么从上到下，共n层，从第一层开始看
    //第i层先有空白矩形n-i个，有三角形矩形i个

    //这样在每层的内部，还有三行，从上到下3行，从第一行开始看
    //第j行先有空白矩形行（n-i）个,之后有i个第j行矩形
    int n=0;
    scanf("%d",&n);
    for (int i = 1; i < n+1; ++i)//控制第几层
    {
        for (int j = 1; j <=3; ++j)//到了第i层的第j行，控制行
        {
            for (int k = 0; k < n-i; ++k) //第j行先有空白
            {
                print_empty_3();
            }
            for (int k = 0; k < i; ++k) //打印i个矩形第j行
            {
                print_level(j);
            }
            printf("\n");//每行输出完后换行
        }
    }
    //最后，还有一个高n行的树根
    //这个树根的位置在第nX3列
    for (int i = 0; i < n; ++i)//控制树根高度为n
    {
        for (int j = 0; j < n*3-1; ++j)
        {
            printf(" ");
        }
        printf("*\n");
    }
}
void print_empty_3()
{
    printf("   ");
}
void print_level(int l)
{
    if (1==l)
        printf("  *   ");
    else if(2==l)
        printf(" * *  ");
    else if(3==l)
        printf("* * * ");
}