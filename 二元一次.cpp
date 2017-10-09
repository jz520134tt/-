#include<stdio.h>
main()
{
	//ax+by=m
	//cx+dy=n
	//x=(md-bn)/(ad-bc）
	//y=(mc-an)/(bc-ad)
	double a,b,c,d,m,n,x,y;
	printf("请输入x y前面的系数以及m n的值\n");
	scanf("%lf%lf%lf",&a,&b,&m);
	scanf("%lf%lf%lf",&c,&d,&n);
	x=(m*d-b*n)/(a*d-b*c);
	y=(m*c-a*n)/(b*c-a*d);
	printf("x值为%lf，y值为%lf\n",x,y);
 } 
