#include <stdio.h>

int number = 4;
int number1 = 3;
int number2 = 5;

//�ڷ� �迭�� �ʱ�ȭ�Ѵ�.
int a[4][4] = {
	{0, 1, 1, 0},
	{1, 0, 0, 0},
	{0, 1, 0, 1},
	{0, 0, 0, 0}
};

int b[3][3] = {
	{0, 1, 1},
	{1, 0, 0},
	{1, 1, 0}
};

int c[5][5] = {
	{0, 0, 1, 1, 1},
	{1, 1, 0, 0, 0},
	{1, 1, 0, 1, 0},
	{0, 0, 0, 1, 1},
	{1, 1, 0, 0, 0}
};

void floydwarshall() { //ù ��° ������ int a�� ���� �˰��� 
	//��� �׷����� �ʱ�ȭ�Ѵ�.
	int d[number][number];

	for(int i = 0; i < number; i++){
		for(int j = 0; j < number; j++){
			d[i][j] = a[i][j]; 
		}
	}

	//i = ��� �������� �����Ѵ�. 
	for(int i = 0; i < number; i++){
		// k = ���İ���  �������� �ϳ��� ������ �鸣�鼭 üũ���ش�. 
		for(int k = 0; k < number; k++){
			// j = ���� ����
			for(int j = 0; j < number; j++){ //���İ��� ������ ���� ������ ���踦 ����Ѵ�. 
				if(d[i][k] + d[k][j] == 2) //����� ���� aik�� aki�� �Ѵ� 1�̸� 
					d[i][j] = 1;           //aij�� ũ��� 1�� �ǰ� �Ѵ�. 
			}
		}
	}
	//����� ����Ѵ�.
	for(int i = 0; i < number; i++){
		for(int j = 0; j < number; j++){
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
}

void floydwarshall1() { //�� ��° ������ int b������ �˰��� 
	//��� �׷����� �ʱ�ȭ�Ѵ�.
	int e[number1][number1];

	for(int i = 0; i < number1; i++){
		for(int j = 0; j < number1; j++){
			e[i][j] = b[i][j]; 
		}
	}

	//i = ��� �������� �����Ѵ�. 
	for(int i = 0; i < number1; i++){
		// k = ���İ���  �������� �ϳ��� ������ �鸣�鼭 üũ���ش�. 
		for(int k = 0; k < number1; k++){
			// j = ���� ����
			for(int j = 0; j < number1; j++){ //���İ��� ������ ���� ������ ���踦 ����Ѵ�. 
				if(e[i][k] + e[k][j] == 2) //����� ���� eik�� eki�� �Ѵ� 1�̸� 
					e[i][j] = 1;           //eij�� ũ��� 1�� �ǰ� �Ѵ�. 
			}
		}
	}
	//����� ����Ѵ�.
	for(int i = 0; i < number1; i++){
		for(int j = 0; j < number1; j++){
			printf("%d ", e[i][j]);
		}
		printf("\n");
	}
}
void floydwarshall2() { //�� ��° ������ int c������ �˰���  
	//��� �׷����� �ʱ�ȭ�Ѵ�.
	int f[number2][number2];

	for(int i = 0; i < number2; i++){
		for(int j = 0; j < number2; j++){
			f[i][j] = c[i][j]; 
		}
	}

	//i = ��� �������� �����Ѵ�. 
	for(int i = 0; i < number2; i++){
		// k = ���İ���  �������� �ϳ��� ������ �鸣�鼭 üũ���ش�. 
		for(int k = 0; k < number2; k++){
			// j = ���� ����
			for(int j = 0; j < number2; j++){ //���İ��� ������ ���� ������ ���踦 ����Ѵ�. 
				if(f[i][k] + f[k][j] == 2) //����� ���� fik�� fki�� �Ѵ� 1�̸� 
					f[i][j] = 1;           //fij�� ũ��� 1�� �ǰ� �Ѵ�. 
			}
		}
	}
	//����� ����Ѵ�.
	for(int i = 0; i < number2; i++){
		for(int j = 0; j < number2; j++){
			printf("%d ", f[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	floydwarshall(); //�տ��� ������ warshall�˰�����  �������ش�. 1������ ���� 
	printf("\n");
	floydwarshall1(); //2������ ���� 
	printf("\n");
	floydwarshall2(); //3������ �� 
	return 0;
}