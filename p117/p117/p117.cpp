#include <stdio.h>

int main(void)
{
	double num1, num2;
	printf("�� ��:  ");
	scanf("%1f %1f", &num1, &num2);

	printf("�� ���� ��: %f \n", num1+num2);
	printf("�� ���� ����: %f \n", num1-num2);
	printf("�� ���� ��: %f \n", num1*num2);
	printf("�� ���� ������: %f \n", num1/num2);
	return 0;
}