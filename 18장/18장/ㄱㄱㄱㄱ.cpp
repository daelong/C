#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *fp;
	char fname[256];
	char buffer[256];
	char word[256];
	int line = 0;

	printf("���� �̸��� �Է��ϼ���.");
	scanf("%s", fname);

	printf("ã�� �ܾ �Է��ϼ���.");
	scanf("%s", word);

	if((fp = fopen(fname, "r")) = NULL)    // fp�� r�� ���� NULL�� ���´ٸ� 
	{
		fprintf(stderr, "���� %s�� ���� �����ϴ�.", fname); // fprintf�� ���ϰ����� ���� ����� �� ���Ǵ°� stderr(standard error) �̰� ������ ����ִ°�
		return 0;
	}     // �̰� ǥ������ c��� �ҽ��ۼ� �����

	while( fgets(buffer, 256, fp)) // �� 256���̸�ŭ ���Ͽ��� �о ���ۿ� ���� �� �ְ� ���ִ°�
	{
		line++; // ������ �о��⶧���� ���� �����ϱ����� line�� �־��ְ� ���� ������ �� (256�� �����ε�)
		if(strstr(buffer, word)) // strstr�� word�� buffer�� ������ �Ǿ��ִ����� ���� ���θ� ����� ���� �� ������ ���Ͽ��� ������ buffer�� ��� buffer�� �ִ� �Ϳ��� word�� ã�°���
		{
			printf("���� %d���� : �ܾ� %s��(��) �߰ߵǾ����ϴ�.\n", line, word);
		}
	}
	fclose(fp);
	return 0;
}