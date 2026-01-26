// Project08.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#define COUNT 8 //상수임
int main()
{
    int a = 0;
    int b = 0;
    while (a < COUNT)
    {
        while (b < COUNT)
        {
            printf("*");
            b++;
           
        }
        printf("\n");
        a++;
        b = 0;
    }
    const int NUMBER = 5; //상수
    return 0;
}
