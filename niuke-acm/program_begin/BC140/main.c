#include <stdio.h>
float Rec(float ,float );
float Cir(float );
float Squ(float );
int main()
{
    float RecRow,RecLef;//矩形长宽
    float Bi;//圆形半径
    float S;//正方形边长
    scanf("%f %f",&RecRow,&RecLef);
    getchar();
    scanf("%f",&Bi);
    getchar();
    scanf("%f",&S);
    printf("%.0f\n%g\n%.0f", Rec(RecLef,RecRow),
                                Cir(Bi),
                                Squ(S));
    return 0;
}
float Rec(float L,float R)
{
    return L*R;
}
float Cir(float s)
{
    return s*s*3.14;
}
float Squ(float C)
{
    return C*C;
}