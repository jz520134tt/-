#include<stdio.h>
main()
{
	//ax+by=m
	//cx+dy=n
	//x=(md-bn)/(ad-bc��
	//y=(mc-an)/(bc-ad)
	double a,b,c,d,m,n,x,y;
	printf("������x yǰ���ϵ���Լ�m n��ֵ\n");
	scanf("%lf%lf%lf",&a,&b,&m);
	scanf("%lf%lf%lf",&c,&d,&n);
	x=(m*d-b*n)/(a*d-b*c);
	y=(m*c-a*n)/(b*c-a*d);
	printf("xֵΪ%lf��yֵΪ%lf\n",x,y);
 } 
