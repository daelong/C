#include <stdio.h>

int main(void)
{
	int total=0,i=0;
	int num, input;

	printf("��� ������ �Է��Ͻðڽ��ϱ� : \n");
	scanf("%d", &num);

	while(i++<num)
	{
		printf("���� �Է�: ");
		scanf_s("%d," &input);
		total+=input;
	}
	printf("�Է��� ������ ��: %f \n," (double)total/num);
	return 0;
	
}