#include<stdio.h> 
int main()
{
	float x;
	int a,b;
	scanf("%f",&x);
	a=x; //�Զ�����ת����ȡ��������
	b=(int)(x*1000)%1000; //��1000���1000ȡ�࣬�õ�3λС���������
	printf("%d%d\n",a,b);
	return 0; 
}
