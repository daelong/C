#include <stdio.h>

int main(void)
{
	int num;
	printf(" 0�̻��� ���� �Է� : ");
	scanf("%d", &num);

	if(num==1)
		goto ONE;
	else if(num==2)
		goto TWO;
	else 
		goto OTHER;

ONE:
	printf("1�� �Է��ϼ̽��ϴ�! \n");
	goto END;
TWO:
	printf("2�� �Է��ϼ̽��ϴ�! \n");
	goto END;
OTHER:
	printf("3Ȥ�� �ٸ� ���� �Է��ϼ̱���!");

END:
	return 0;
}