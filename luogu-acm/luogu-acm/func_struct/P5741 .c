#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#define no_more_than5(X,Y) fabs((X)-(Y))<=5?1:0
#define no_more_than10(X,Y) fabs((X)-(Y))<=10?1:0
//定义结构体
typedef struct Stu{
    char name[9];
    int Chinese;
    int Math;
    int English;
    int sum;
}stu;
void similar(stu *people,int num);
int main()
{
    int input;
    scanf("%d",&input);
    stu *people=(stu*) malloc(sizeof (stu)*input);
    for (int i = 0; i < input; ++i)
    {
        scanf("%s %d %d %d",people[i].name,&(people[i].Chinese),
              &(people[i].Math),&(people[i].English));
        people[i].sum=people[i].English+people[i].Math+people[i].Chinese;
    }
    similar(people,input);
    return 0;
}
void similar(stu *people,int num)
{
    for (int i = 0; i < num; ++i)
    {
        for (int j = i+1; j <num ; ++j)
        {
            if(((no_more_than5(people[i].Chinese,people[j].Chinese))
            &&(no_more_than5(people[i].Math,people[j].Math))
            &&(no_more_than5(people[i].English,people[j].English)))
            &&(no_more_than10(people[i].sum,people[j].sum)))
            {
                printf("%s %s\n",people[i].name,people[j].name);
            }
        }
    }
}
