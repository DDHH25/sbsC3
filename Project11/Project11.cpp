#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	/* for 반복문
	* 
	* for(초기식 ; 조건식 ; 증감식 )
	* {
	*	//반복실행할 명령문
	* 
	* }
	
	
	
	*/
	// int i = 0;
/*	while (i < 10)
	{
		printf("i = %d\n", i);
		i++;
	}
	*/
	//for (int i = 0; i < 10; i++)	//초기식 ==> 조건식 ==> 명령문 ==>증감식 ==>조건식
	//{
	//	printf("i= %d\n", i);
	//}
	//for(반복진입하면서 처음에 무조건 한번만 실행할 명령문(들); 처음부터 매 반복시 실행될 명령문, 이 결과가 0이면 반복종료; 1회 반복이후부터 매 반복시 실행될 명령문)

	for (int i = 0; i < 5; printf("%d\n", i++))
	{

	}

	// 2 4 6 8 10
	for (int j = 0; j < 10; printf(" % d\t", j += 2))
	{

	}

	for (char ch = 'a'; ch <= 'z'; printf("%c", ch++))
	{

	}

	printf("\n");

	for (char ch1 = 'z'; ch1 >= 'a'; ch1--)
	{
		printf("%c", ch1-32);
	}
	printf("\n");

	for (int i = 0; ; i++)
	{
		if (i >= 10) break; //반복문 즉시 탈출
		printf("%d", i);
	}
	return 0;
}