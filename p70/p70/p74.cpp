#include <stdio.h>

int main(void)
{
	int result;
	int num1, num2, num3;

	printf("�� ���� ���� �Է� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result=(num1-num2)*(num2+num3)*(num3%num1);
	printf("%d", result);
	return 0;
}