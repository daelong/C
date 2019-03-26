#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[20] = "I love you";
	char result[5] = "Love";
	strcpy(result, input);
	printf("문자열 복사 : %s \n", result);
	return 0;
}