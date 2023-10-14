#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	const int d_per_w = 7;
	int input,days,weeks;
	printf("Please input how many days you hard working:\n");
	scanf("%d", &input);
	while (input > 0)
	{
		weeks = input / d_per_w;
		days = input % d_per_w;
		printf("Have a rest, you have worked %d weeks and %d days.\n"
			, weeks, days);
		scanf("%d", &input);
	}
	printf("You have a long day.\n");

	return 0;
}