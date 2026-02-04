#define     _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //표준입출력에 관한 함수들이 정의되어 있음
#include <stdlib.h> //표준 라이브러리에 해당되는 함수들이 정의되어 있음
#include<time.h> //시스템(컴퓨터) 시간에 관련된 함수들이 정의되어 있음

//난수를 반환하는 함수 만들기
//제한 범위를 주어 1~n까지의 난수를 생성
//반환값은 정수(int)형 입니다.

int make_random(int start, int end)
{
if (start >= end)
return 0;
int range = end - start;
return(rand() % range + start);
}

void make_random_array(int arr[], size_t count)
{
for (int i = 0; i < count; i++)
{
arr[i] = make_random(30, 100);
printf("%d\n", arr[i]);
}
}

void print_array(int arr[], size_t count)
{

// printf("print_array함수에서 출력함: arr[5]=%d\n", arr[5]);
for (int i = 0; i < count; i++)
{
printf("%d\t", arr[i]);
}
printf("\n");
}

void exchange(int* p1, int* p2)
{
int tmp;
tmp = *p1;
*p1 = *p2;
*p2 = tmp;


}
//배열의 아이템들을 순서대로 오름차순으로 정렬하기
void sort_array(int arr[], size_t count)
{
for (int i = 0; i < count; i++)
for (int j = 0; j < count - 1; j++)
if (arr[j] > arr[j + 1])
exchange(&arr[j], &arr[j + 1]);

}

//배열을 전달받아서 최대값을 찾아서 반환하는 함수를 구현하세요.
//함수 이름: find_max

int find_max(int arr[], size_t count)
{
int max = arr[0];
for (int i = 0; i < count-1; i++)
{
if (arr[i + 1] > max)
max = arr[i + 1];
}
return max;

}


int main()
{
//난수를 생성하기 위해 반드시 난수 생성 엔진을 초기화해야한다
srand(time(NULL));

int arr[15];
int nums[30];
int scores[5];

make_random_array(arr, 15);
print_array(arr, 15);
// sort_array(arr, 15);
print_array(arr, 15);
printf("최대값은 %d",find_max(arr, 15));

return 0;
}
