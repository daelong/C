#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pi, i;
	pi = (int *)malloc(5 * sizeof(int)); // 총 5개의 int형 데이터가 들어갈 수 있는 배열과 같은 공간을 만들어주는 것
	if( pi == NULL)
	{
		printf("동적 메모리 할당에 실패 했습니다.");
		exit(1);
	}
	pi[0] = 100;
	pi[1] = 200;
	pi[2] = 300;
	pi[3] = 400;
	pi[4] = 500;
	for(i=0; i<5; i++)
	{
		printf("%d\n", *(pi + i));
	}
	free(pi);
	return 0;
}