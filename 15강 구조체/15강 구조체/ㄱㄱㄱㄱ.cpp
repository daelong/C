#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

struct point
{
	int x;
	int y;
};

int main(void)
{
	struct point p1, p2;
	int xdiff, ydiff;
	double distance;

	printf("1�� ���� ��ǥ�� �Է��ϼ��� : ");
	scanf(" %d %d", &p1.x, &p1.y);

	printf("2�� ���� ��ǥ�� �Է��ϼ���: ");
	scanf(" %d %d", &p2.x, &p2.y);

	xdiff = p1.x - p2.x;
	ydiff = p1.y - p2.y;

	distance = double sqrt(xdiff * xdiff + ydiff * ydiff);
	printf("�� �� ������ �Ÿ��� %f�Դϴ�.", distance);
	return 0;
}