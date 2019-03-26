#include <stdio.h>
#include <math.h>

int gcd(int a, int b) // 최대공약수 함수 선언 a,b는 인자전달
{
	if(b == 0)
		return a;// b = 0일때는 a가 최대 공약수가 되므로 a값을 반환
	else return gcd(b, a%b);// 위에 경우가 아닐때는 최대공약수는 gcd(b, a%b)가 된다.
}

int main(void)
{
	int n, i; //입력할 소수 n과 반복문을 위한 i선언
	int result = 0; // 소수구하기 결과를 정하기 위해서 result를 선언, 초기화 해줌
	int a, b; // 최대공약수를 구하기 위한 두 수를 얻기위해 a와 b를 선언
	
	scanf("%d %d %d", &n, &a, &b); // 구할 소수 n과 최대공약수를 구할 두 수 a,b 입력
	for(i = 2; i < n; i++) //소수 구하기 위한 계산
	{
		if(n%i == 0) // i는 2이므로 2로 나누어고 n전까지 계속해서 나눔
		{
			result++; // 나누어 진다면 result값이 올라감
		}
	}
	if(result ==0) // result값이 0이라면 즉, i로 나누어지지 않았다면
	{
		printf("%d번 문제_결과 : True \n", 1);//소수임
	}
	else
	{
		printf("%d번 문제_결과 : False \n", 1);//나누어지면 소수가 아님
	}
	printf("%d번 문제_결과 : %d",2, gcd(a,b));//최대공약수의 값 산출
	return 0;
}
