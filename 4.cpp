//身高转换器，可将厘米身高转换为英寸
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define FEET_TO_CM 30.48
#define INCH_TO_CM 2.54
int main(void)
{
	int feet;
	float cm, inches;
	printf("This is a height switch program.\n");
	printf("Please input your height(cm):");
	scanf("%f", &cm);
	while(cm>0)
	{
		feet = cm / FEET_TO_CM;//feet是整型，会被截断直接取整
		inches = (cm - feet * FEET_TO_CM) / INCH_TO_CM;
		printf("%.1f cm = %d feet , %.1f inches\n", cm, feet, inches);
		scanf("%f", &cm);

	}


	return 0;
}