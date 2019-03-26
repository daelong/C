#include <stdio.h>

int main(void)
{
	int total=0,i=0;
	int num, input;

	printf("몇개의 정수를 입력하시겠습니까 : \n");
	scanf("%d", &num);

	while(i++<num)
	{
		printf("정수 입력: ");
		scanf_s("%d," &input);
		total+=input;
	}
	printf("입력한 정수의 평군: %f \n," (double)total/num);
	return 0;
	
}