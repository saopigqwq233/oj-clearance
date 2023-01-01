#include<stdio.h>
#include "stdlib.h"
typedef struct {
    char name[9];
    int chinese;
    int math;
    int english;
    int sum;
}Stu;
int main()
{
    int num,i=0;
    scanf("%d",&num);
    Stu *stu=(Stu*) malloc(sizeof (Stu)*num);
    Stu *max=stu;
    while (num--)
    {
        scanf("%s %d %d %d",(stu[i].name),&(stu[i].chinese),&(stu[i].math)
                ,&(stu[i].english));
        stu[i].sum=stu[i].chinese+stu[i].math+stu[i].english;
        if(stu[i].sum>max->sum)
            max=&(stu[i]);
        i++;
    }
    printf("%s %d %d %d",max->name,max->chinese,max->math,max->english);
    return 0;
}
