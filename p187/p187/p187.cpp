#include <stdio.h>

int main(void)
{
	int e,k,m;
	int result=0;
	printf("����, ����, ���� ���� �Է�: ");
	scanf(" %d %d %d", &e, &k, &m);

	result = (e+k+m)/3;
	printf(" ��� : %d ", result);

	if(result>=90)
		printf("A");
	else if(result>=80)
		printf("B");
	else if(result>=70)
		printf("C");
	else if(result>=50)
		printf("D");
	else 
		printf("F");
	return 0;
}