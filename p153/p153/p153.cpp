#include <stdio.h>

int main(void)
{
	int num=0, total=0;

	do
	{
		total+=num;
		num=num*2;
	}while(num<=50);

	printf("¦���� �� : %d \n", total);
	return 0;
}