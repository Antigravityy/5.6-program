//该程序不够完善
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define M_TO_H 60
int main(void)
{
	int hour,min1,min2;
	printf("Please enter your time(min):\n");
	scanf("%d", &min1);

	while (min1>0)
	{
		hour = min1 / M_TO_H;
		min2 = min1 % M_TO_H;
		printf("You spend %d hours and %d minutes.\n", hour, min2);
		printf("Please continue enter your time(min):\n");
		printf("If you wang to quit, just input 0.\n");
		scanf("%d", &min1);
	}

	return 0;
}