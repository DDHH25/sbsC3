#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> // Standard Input/Output, 표준 입출력에 관한 함수들 정의
#include <string.h> // 문자열 처리에 관련된 함수들이 정의
int main() {

	//0=='\0'
	//'\0': null terminated character, 문자 배열에 이 값이 들어가야 문자열이 완성됨
	// 'A'==65

	//배열로 문자열 만들기
	//문자열은 배열이다.
	 //char sz[] = { 65,66,67,68,69,70,0};

	//char sz[] = {'A', 'B', 'C', 'D', 'E', 'F', '\0'};
	char sz[] = { 'H','e','l','l','o','\0' };
	char sz2[] = "Hello"; //문자열(String)
	//char sz[] = "Hello"; //문자열(String) 
	int len = sizeof(sz); // sizeof(char); //배열의 길이 구하기
	/*for (int i = 0; i < len; i++)
	{
		printf("%c", sz[i]);
	} */
	printf("sz배열의 크기는: %d\n", len);
	printf("%s\n", sz);
	//sz[1] = 'E';

	printf("%s\n", sz);

	//배열의 크기는 문자열의 길이와 같은가?    

	int slen = strlen(sz); //문자열(String)
	//문자열 비교하기
	printf("sz의 문자열의 길이: %d", slen);
	if (sz == sz2)
		printf("sz와 sz2는 서로 같음\n");
	else
		printf("sz와 sz2는 서로 다름\n");  

	if (strcmp(sz, sz2)==0)
		printf("sz와 sz2는 서로 같음\n");
	else
		printf("sz와 sz2는 서로 다름\n");
	//&: 주소연산자
	//문자열의 입력
	char name[20];//알파벳 9글자까지 입력가능
	printf("이름 입력: ");
	//scanf()믐 공백문자를 입력받을 수 없음
	scanf("%s", name); //문자열을 입력 받을때는 주소연산자를 붙히지않는다.
	printf("%s\n", name);

//	fgets(받을배열, 최대길이, stdin);
	//표준입력장치로부터 문자열을 입력받아 name에 대입한다.
//	fgets(name, 20, stdin);
	//printf("%s\n", name);

	return 0;
}
