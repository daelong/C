#include <stdio.h>

int main(void)
{
	double num1, num2;
	printf("두 수:  ");
	scanf("%1f %1f", &num1, &num2);

	printf("두 수의 합: %f \n", num1+num2);
	printf("두 수의 빼기: %f \n", num1-num2);
	printf("두 수의 곱: %f \n", num1*num2);
	printf("두 수의 나누기: %f \n", num1/num2);
	return 0;
}