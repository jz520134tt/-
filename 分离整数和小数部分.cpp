#include<stdio.h> 
int main()
{
	float x;
	int a,b;
	scanf("%f",&x);
	a=x; //自动类型转换，取整数部分
	b=(int)(x*1000)%1000; //乘1000后对1000取余，得到3位小数点后数字
	printf("%d%d\n",a,b);
	return 0; 
}
