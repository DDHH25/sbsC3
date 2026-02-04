#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//배열 arr을 정의
	//배열의 길이:5,(n)
	//배열의 타입: int
	int arr[5];
	arr[0] = 1; //배열의 첫번째 요소에 값 1을 대입
	//인덱스의 범위: 0 ~ n-1
	for (int i = 0; i < 5; i++) // 0~4
	{
		arr[i] = i + 1; //1,2,3,4,5
	}
	for (int i = 0; i < 5; printf(" % d\t", arr[i++]))
	{

	}
	//float형 배열 10칸짜리를 선언해보세요.

	float arr2[10]; //40BYTE
	//nums의 모든 값을 다음과 같이 만드세요
	// 5.0 10.0 15.0 20.0 25.0 
	for (int i = 0; i < 10; i++)
	{
		arr2[i] = (i + 1) * 5.F;
		printf(" %.1f", arr2[i]);
	}
	//배열의 초기화
	char sz[3] = { 65,66,67 };
	short my_nums[] = { 1,2,3,4,5,6,7 }; //7칸짜리 short형배열을 1,2,3,4,5,6,7로 초기화
	long bigs[5] = { 0 }; //bigs의 모든 요소들을 0으로 초기화함

	//sz배열의 모든 요소에 값을 입력받아 대입하세요
	//scanf("%hhd
	//

	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		printf("정수입력: ");
		scanf("%hhd", &sz[i]);

	}
	for (int i = 0; i < 3; i++)
		printf("%hhd\t", sz[i]);
		


	//배열의 메모리 할당 크기를 알아보기
	printf("int형의 크기: %llubytes\n", sizeof(int)); //4
	printf("배열 arr의 크기: %llubytes\n", sizeof(arr)); //배열의 크기; 배열의 타입의 크기 * 배열의 길이
	printf("배열 arr2의 크기: %llubytes\n", sizeof(arr2));
	printf("배열 sz의 크기: %llubytes\n", sizeof(sz));
	printf("배열 my_nums의 크기: %llubytes\n", sizeof(my_nums));
	printf("배열 bigs의 크기: %llubytes\n", sizeof(bigs));



	arr[0] = 88;
	arr[1] = 95;
	arr[2] = 100;
	arr[3] = 70;
	arr[4] = 65;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d\t", arr[i]);
	}
	
	int tot = 0; 
	int	avg=0;
	int	num=1;

	for (int i = 0; i < 5; i++)
	{
		tot += arr[i];
		num++;
	}
	printf("\n합계: %d\n", tot);
	printf("평균: %.2f\n", (float)tot / num);


	short numbers[] = { 9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9 };
	int index = sizeof(numbers) / sizeof(short);
	printf("numbers의 아이템 개수: %d개", sizeof(numbers) / sizeof(short));
	numbers[index-1] = 100;
	printf("\nnumbers배열의 가장 마지막 아이템: numbers[%d]=%d\n", index-1, numbers[index-1]);

	//for문을 이용하여 numbers배열에 1~개수까지의 수를 각 아이템에 순서대로 대입하세요.
	for (int i = 0; i < index; numbers[i++]=i+1)
	{
			
	}

	for (int i = 0; i < index; i++)
	{
		printf("\n%d",numbers[i]);
	}

	return 0;

}