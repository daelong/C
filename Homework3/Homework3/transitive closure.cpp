#include <stdio.h>

int number = 4;
int number1 = 3;
int number2 = 5;

//자료 배열을 초기화한다.
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

void floydwarshall() { //첫 번째 문제인 int a에 대한 알고리즘 
	//결과 그래프를 초기화한다.
	int d[number][number];

	for(int i = 0; i < number; i++){
		for(int j = 0; j < number; j++){
			d[i][j] = a[i][j]; 
		}
	}

	//i = 출발 정점에서 시작한다. 
	for(int i = 0; i < number; i++){
		// k = 거쳐가는  정점으로 하나씩 정점을 들르면서 체크해준다. 
		for(int k = 0; k < number; k++){
			// j = 도착 정점
			for(int j = 0; j < number; j++){ //거쳐가는 정점과 도착 정점의 관계를 계산한다. 
				if(d[i][k] + d[k][j] == 2) //행렬의 원소 aik와 aki가 둘다 1이면 
					d[i][j] = 1;           //aij의 크기는 1이 되게 한다. 
			}
		}
	}
	//결과를 출력한다.
	for(int i = 0; i < number; i++){
		for(int j = 0; j < number; j++){
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
}

void floydwarshall1() { //두 번째 문제인 int b에대한 알고리즘 
	//결과 그래프를 초기화한다.
	int e[number1][number1];

	for(int i = 0; i < number1; i++){
		for(int j = 0; j < number1; j++){
			e[i][j] = b[i][j]; 
		}
	}

	//i = 출발 정점에서 시작한다. 
	for(int i = 0; i < number1; i++){
		// k = 거쳐가는  정점으로 하나씩 정점을 들르면서 체크해준다. 
		for(int k = 0; k < number1; k++){
			// j = 도착 정점
			for(int j = 0; j < number1; j++){ //거쳐가는 정점과 도착 정점의 관계를 계산한다. 
				if(e[i][k] + e[k][j] == 2) //행렬의 원소 eik와 eki가 둘다 1이면 
					e[i][j] = 1;           //eij의 크기는 1이 되게 한다. 
			}
		}
	}
	//결과를 출력한다.
	for(int i = 0; i < number1; i++){
		for(int j = 0; j < number1; j++){
			printf("%d ", e[i][j]);
		}
		printf("\n");
	}
}
void floydwarshall2() { //세 번째 문제인 int c에대한 알고리즘  
	//결과 그래프를 초기화한다.
	int f[number2][number2];

	for(int i = 0; i < number2; i++){
		for(int j = 0; j < number2; j++){
			f[i][j] = c[i][j]; 
		}
	}

	//i = 출발 정점에서 시작한다. 
	for(int i = 0; i < number2; i++){
		// k = 거쳐가는  정점으로 하나씩 정점을 들르면서 체크해준다. 
		for(int k = 0; k < number2; k++){
			// j = 도착 정점
			for(int j = 0; j < number2; j++){ //거쳐가는 정점과 도착 정점의 관계를 계산한다. 
				if(f[i][k] + f[k][j] == 2) //행렬의 원소 fik와 fki가 둘다 1이면 
					f[i][j] = 1;           //fij의 크기는 1이 되게 한다. 
			}
		}
	}
	//결과를 출력한다.
	for(int i = 0; i < number2; i++){
		for(int j = 0; j < number2; j++){
			printf("%d ", f[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	floydwarshall(); //앞에서 지정한 warshall알고리즘을  시행해준다. 1번문제 실행 
	printf("\n");
	floydwarshall1(); //2번문제 실행 
	printf("\n");
	floydwarshall2(); //3번문제 실 
	return 0;
}