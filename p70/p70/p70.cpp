#include <stdio.h>

int main(void)
{
	int result;
	int num1, num2;

	printf("두 개의 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);

	result:num1-num2;
	printf("%d", result);
	return 0;
}