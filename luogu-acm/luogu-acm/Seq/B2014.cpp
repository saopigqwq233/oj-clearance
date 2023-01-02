//输入圆的半径实数 r，输出圆的直径、周长、面积，每个数保留小数点后 44 位。圆周率取值为 3.141593.14159。
//直径R，周长C面积S 
#include<stdio.h>
int main()
{
	double r;
	scanf("%lf",&r);
	printf("%.4lf %.4lf %.4lf",2*r,2*3.14159*r,3.14159*r*r);
	return 0;
}
