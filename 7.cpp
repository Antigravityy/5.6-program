#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double main2(double n);
int main(void)
{
	double num1;
	printf("Please input a number(double):\n");
	scanf("%lf", &num1);
	main2(num1);
	printf("Over!!\n");

	return 0;
}
double main2(double n)
	{
		double x = n * n * n;
		printf("The %lg's cubic is %lg !\n", n, x);
		return x;
	}