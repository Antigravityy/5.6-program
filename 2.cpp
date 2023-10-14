#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int input;
	int sum = 0;
	printf("Please input your number:\n");
	scanf("%d", &input);
	while (sum++ < 11)
		printf("%d ", input++);
	printf("\nProgram over!");
	return 0;
}