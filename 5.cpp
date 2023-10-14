#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int days, moneys = 1, sum = 0;
	printf("How many days do you spend?\n");
	scanf("%d", &days);
	while (days-- > 0) {
		sum = sum + moneys++;
	}
	printf("Congratulations!! You earned $ %d total!\n", sum);


	return 0;
}