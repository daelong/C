#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *fp;
	char fname[256];
	char buffer[256];
	char word[256];
	int line = 0;

	printf("파일 이름을 입력하세요.");
	scanf("%s", fname);

	printf("찾을 단어를 입력하세요.");
	scanf("%s", word);

	if((fp = fopen(fname, "r")) = NULL)    // fp를 r로 열때 NULL이 나온다면 
	{
		fprintf(stderr, "파일 %s를 열수 없습니다.", fname); // fprintf는 파일관련한 에러 출력할 때 사용되는것 stderr(standard error) 이건 에러를 띄워주는것
		return 0;
	}     // 이건 표준적인 c언어 소스작성 방법임

	while( fgets(buffer, 256, fp)) // 에 256길이만큼 파일에서 읽어서 버퍼에 담을 수 있게 해주는것
	{
		line++; // 한줄을 읽었기때문에 줄을 구분하기위해 line을 넣어주고 줄의 갯수를 셈 (256이 한줄인듯)
		if(strstr(buffer, word)) // strstr은 word가 buffer에 포함이 되어있는지에 대한 여부를 물어보는 것임 즉 위에서 파일에서 읽은걸 buffer에 담고 buffer에 있는 것에서 word를 찾는것임
		{
			printf("라인 %d에서 : 단어 %s이(가) 발견되었습니다.\n", line, word);
		}
	}
	fclose(fp);
	return 0;
}