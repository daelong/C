#include <stdio.h>

int main(void)
{
	int num1=0, num2, num3=3;
	printf("양의 정수 입력: ");
	scanf("%d", &num2);

	while(num2)
	{
		printf("%d \n", num2*num3);
		num1++;
	}
	return 0;
}