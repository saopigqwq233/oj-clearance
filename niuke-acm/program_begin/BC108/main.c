#include <stdio.h>
void Creat(int Mat[10][10],int row,int lef);
void Change(int Mat[10][10],char ,int ,int );
void Display(int Mat[10][10],int row,int lef);
int main()
{
    int Mat[10][10];
    int row,lef;
    scanf("%d %d",&row,&lef);
    Creat(Mat,row,lef);
    int Opera;
    scanf("%d",&Opera);
    for (int i = 0; i < Opera; ++i)
    {
        getchar();
        char Func;
        Func=getchar();
        Change(Mat,Func,row,lef);
    }
    Display(Mat,row,lef);
    return 0;
}
void Creat(int Mat[10][10],int row,int lef)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < lef; ++j)
        {
            scanf("%d",&Mat[i][j]);
        }
        getchar();
    }
}
void Display(int Mat[10][10],int row,int lef)
{
    for (int i = 0; i < row; ++i)
    {
        //printf("aa");
        for (int j = 0; j < lef; ++j)
        {
            printf("%d ",Mat[i][j]);
        }
        printf("\n");
    }
}
void Change(int Mat[10][10],char Opera,int row,int lef)
{
    if(Opera=='r')
    {
        int row1,row2;
        scanf("%d %d",&row1,&row2);
        for (int i = 0; i < lef; ++i)
        {
            int temp=Mat[row1-1][i];
            Mat[row1-1][i]=Mat[row2-1][i];
            Mat[row2-1][i]=temp;
        }
    }
    else if(Opera=='c')
    {
        int lef1,lef2;
        scanf("%d %d",&lef1,&lef2);
        for (int i = 0; i < row; ++i)
        {
            int tmp=Mat[i][lef1-1];
            Mat[i][lef1-1]=Mat[i][lef2-1];
            Mat[i][lef2-1]=tmp;
        }
    }
    else
        return;
}