#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, x, y;
	int** pptr = (int**)malloc(sizeof(int*) *8);  //포인터 8개에 메모리를 할당
	for(i=0; i<8; i++)
	{
		*(pptr + i) = (int *)malloc(sizeof(int)*6);  // 그 할당된 8개의 포인터들 각각에 6개의 포인터를 할당 총 48개 할당
	}

	for(y=0; y<8; y++)
	{
		for(x=0; x<6; x++)
		{
			*(*(pptr + y) + x) = 6 * y + x;  //*(pptr + y)는 동적메모리 y갯수에대한 포인터이고 *(*(pptr+y)+x)는 동적메모리 x를 포함한 y의 갯수이다. 그리고 그 계산법은 6*y+x이다. 왜 이러한 계산법이냐면 x가 6개 다차면 y가 한개 오르기 때문이다.
		}
	}

	for(y=0; y<8; y++)
	{
		for(x=0; x<6; x++)
		{
			printf("%3d", *(*(pptr + y) + x)); // 앞에서 구성 짠거 출력
		}
		printf("\n");      // x끝날때마다 한줄씩 뛰어쓰기함
	}
	
	for(y=0; y<8; y++);
	{
		free(*(pptr + y));   // x칸이 다차고 y가 한칸씩 될때마다 다시 초기화 시켜줌
	}
	return 0;
}