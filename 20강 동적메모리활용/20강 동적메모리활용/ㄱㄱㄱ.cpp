#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, x, y;
	int** pptr = (int**)malloc(sizeof(int*) *8);  //������ 8���� �޸𸮸� �Ҵ�
	for(i=0; i<8; i++)
	{
		*(pptr + i) = (int *)malloc(sizeof(int)*6);  // �� �Ҵ�� 8���� �����͵� ������ 6���� �����͸� �Ҵ� �� 48�� �Ҵ�
	}

	for(y=0; y<8; y++)
	{
		for(x=0; x<6; x++)
		{
			*(*(pptr + y) + x) = 6 * y + x;  //*(pptr + y)�� �����޸� y���������� �������̰� *(*(pptr+y)+x)�� �����޸� x�� ������ y�� �����̴�. �׸��� �� ������ 6*y+x�̴�. �� �̷��� �����̳ĸ� x�� 6�� ������ y�� �Ѱ� ������ �����̴�.
		}
	}

	for(y=0; y<8; y++)
	{
		for(x=0; x<6; x++)
		{
			printf("%3d", *(*(pptr + y) + x)); // �տ��� ���� §�� ���
		}
		printf("\n");      // x���������� ���پ� �پ����
	}
	
	for(y=0; y<8; y++);
	{
		free(*(pptr + y));   // xĭ�� ������ y�� ��ĭ�� �ɶ����� �ٽ� �ʱ�ȭ ������
	}
	return 0;
}