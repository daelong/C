#include <stdio.h>

int main(void)
{
	char o;
	int x, y;
	while(1)
	{
		printf("���ľ� ���� �Է��Ͻÿ�.");
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
			printf("�ٽ� �Է��� �ֽʽÿ�.");
		}	
		getchar();
		printf(" ���α׷��� ���� �Ͻðڽ��ϱ�?(y/n)");
		scanf("%c", &o);
		if(o == 'n' || o == 'N')
		{
			continue;
		}else if(o == 'y' || o == 'Y')
		{
			break;
		}else
		{
			printf("�ٽ� �Է��Ͽ� �ֽʽÿ�");
		}
	}
	return 0;
}