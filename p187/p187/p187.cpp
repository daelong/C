#include <stdio.h>

int main(void)
{
	int e,k,m;
	int result=0;
	printf("국어, 영어, 수학 성적 입력: ");
	scanf(" %d %d %d", &e, &k, &m);

	result = (e+k+m)/3;
	printf(" 평균 : %d ", result);

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