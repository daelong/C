#include <stdio.h>
#include <math.h>

int lsprime(int n)
{
	int prime = 0;
	int i = 0;
	
	if(n == 2)
	{
	prime = 0;
	}else
	for(i=2; i<=n; i++)
	{
		if(i%n == 0){
		prime = 1;
		}else if(i%n != 0)
		{
			prime = 0;
		}
	}
	return prime;
}

int main(void)
{
	int n;
	int lsprime;
	scanf("%d", &n);

	if(lsprime == 0){
	printf("%d�� ����_��� : True ", 1);
	}else 
	{
		printf("%d�� ����_��� : False", 1);
	}
	return 0;
}