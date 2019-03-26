#include <stdio.h>
#include <math.h>

int lsprime(int n)
{
	int prime = 0;
	int d = 0;
	double k,n;

	k = double sqrt(n);
	
	if(n == 0)
	{
	prime = 0;
	}else
	while(d<=k)
	{
		if(d%n == 0){
		prime = 1;
		}else if(d%n != 0)
		{
			prime = 0;
		}
		return n;
	}
}

int main(void)
{
	int n;
	int prime;
	scanf("%d", n);
	if(prime == 0){
	printf("%d번 문제_결과 : True ", 1);
	}else if(prime == 1){
		printf("%d번 문제_결과 : False", 1);
	}
	return 0;
}