//摄氏，华氏，开氏转换程序，不够完善
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double Temperatures(double hswd);//自定义函数需要加";"
int main(void)
{
	double hswd;
	printf("Please input temperature(F):");
	while (scanf("%lf", &hswd)==1)
	//当输入与转换说明不对应时，scanf将返回0
	{
		Temperatures(hswd);//调用自定义函数
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