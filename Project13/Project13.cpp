#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	//0=='\0'

	//배열로 문자열 만들기
	//문자열은 배열이다.
	//char sz[] = { 65,66,67,68,69,70, 0 };

	char sz[] = {'A', 'B', 'C', 'D', 'E', 'F', '\0'};
	int len = sizeof(sz) / sizeof(char); //배열의 길이 구하기
	/*for (int i = 0; i < len; i++)
	{
		printf("%c", sz[i]);
	} */
	printf("%s\n", sz);




	return 0;
}
