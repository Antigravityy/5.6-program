//���ϣ����ϣ�����ת�����򣬲�������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double Temperatures(double hswd);//�Զ��庯����Ҫ��";"
int main(void)
{
	double hswd;
	printf("Please input temperature(F):");
	while (scanf("%lf", &hswd)==1)
	//��������ת��˵������Ӧʱ��scanf������0
	{
		Temperatures(hswd);//�����Զ��庯��
		printf("\nEnter next temperature(enter any letter to quit):");
	}
	printf("Program over!\n");
	return 0;
}
double Temperatures(double hswd)
{
	const double n1 = 32,n2=273.16;
	double sswd, kswd;
	sswd = 5.0 / 9.0 * (hswd - n1);
	kswd = sswd + n2;
	printf("The temperature is %.3lf F,in sswd is %.3lf, in kswd is %.3lf .\n"
		, hswd,sswd, kswd);
	return 0;
}