#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int num1, num2, num3;
	printf("This program conputer moduli.\n");
	printf("Enter an integer to server as the second operand:");
	scanf("%d", &num1);
	printf("Now enter the first operand:");
	scanf("%d", &num2);
	while (num2 > 0) {
		num3 = num2 % num1;
		printf("%d %% %d is %d\n", num2, num1, num3);
		//num3���Ը�Ϊ��num2 % num1�������������ٶ���һ��num3��ʡ�ڴ�
		//��Ҫ��ӡ��%����Ҫ����%%
		printf("Enter next number for first operand(<= 0 to quit):");
		scanf("%d",&num2);
	}
	printf("Done!\n");
	return 0;
}