#include "stdio.h"
#include "string.h"
int main()
{
    long int CHN(char *string,int length);
    char s[8000]={0};
    gets(s);
    printf("%d", CHN(s, strlen(s)));
    return 0;
}
long int CHN(char *string,int length)
{
    long int ret=0;
    //1.三循环嵌套,超时
//    for (int i = 0; i < length; ++i)
//    {
//        if(string[i]!='C')
//            continue;
//        else
//        for (int j = i+1; j < length; ++j)
//        {
//            if(string[j]!='H')
//            continue;
//            else
//            for (int k = j+1; k < length; ++k)
//            {
//                if(string[k]!='N')
//                    continue;
//                else
//                    ret++;
//            }
//        }
//    }
    //2.另一种算法
    /*在遇到H之前算C的数量，遇到N后C的数量就加到返回数中*/
    for (int i = 0; i < length; ++i)
    {
        static int c=0;
        static int h=0;
        if(string[i]=='C')
            c++;
        else if(string[i]=='H')
            h+=c;
        else if(string[i]=='N')
            ret+=h;
    }
    return ret;
}
