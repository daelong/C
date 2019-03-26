#include <stdio.h>

int main(void)
{
	int num;
	printf(" 0이상의 정수 입력 : ");
	scanf("%d", &num);

	if(num==1)
		goto ONE;
	else if(num==2)
		goto TWO;
	else 
		goto OTHER;

ONE:
	printf("1을 입력하셨습니다! \n");
	goto END;
TWO:
	printf("2를 입력하셨습니다! \n");
	goto END;
OTHER:
	printf("3혹은 다른 값을 입력하셨군요!");

END:
	return 0;
}