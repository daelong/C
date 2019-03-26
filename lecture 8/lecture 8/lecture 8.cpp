#include <stdio.h>

int main(void)
{
	char o;
	int x, y;
	while(1)
	{
		printf("수식어 값을 입력하시요.");
		scanf("%d %c %d", &x, &o, &y);
		if(o == '+')
		{
			printf("%d %c %d = %d\n", x, o, y, x+y);
		} else if(o == '-')
		{
			printf("%d %c %d = %d\n", x, o, y, x-y);
		}else if(o == '*')
		{
			printf("%d %c %d = %d\n", x, o, y, x*y);
		}else if(o == '/')
		{
			printf("%d %c %d = %d\n", x, o, y, x/y);
		}else 
		{
			printf("다시 입력해 주십시요.");
		}	
		getchar();
		printf(" 프로그램을 종료 하시겠습니까?(y/n)");
		scanf("%c", &o);
		if(o == 'n' || o == 'N')
		{
			continue;
		}else if(o == 'y' || o == 'Y')
		{
			break;
		}else
		{
			printf("다시 입력하여 주십시요");
		}
	}
	return 0;
}