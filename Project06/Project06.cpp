#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    //조건식???
    //비교연산자 또는 논리연산자
    //0: 거짓, 1: 참
/*
    if (1) {
        조건식이 참일때 실행될 명령문(들)
    }

    if (조건식) {
            ~~~~
    }else{
            조건식이 거짓일때 실행될 명령문(들)
    }

    if (조건식1) {
            조건식1이 참일때 실행될 명령문(들)
    }else if(조건식2){
            조건식2가 참일때 실행될 명령문(들)
    }else if(조건식3){
                    조건식3이 참일때 실행될 명령문들
    }else{
            다 거짓일때 실행될 명령문들
    }

*/
    /*int num;
    printf("정수를 입력하세요 >>>");
    scanf("%d", &num);

    if (num%2) {
        printf("홀수");
    }
    else {
        printf("짝수");
    }
    */
    int num1, num2;


    //상수와 변수의 값이 같은지 비교할때는 상수를 앞에 배치하여
    //논리적인 에러를 발생 시킬 수 있는 근거를 제거한다

   /* printf("정수 2개를 입력하세요");
    scanf("%d %d", &num1,&num2);
    if (num1 > num2)
    {
        printf("%d", num1);
    }
    else if(num2>num1)
    {
        printf("%d", num2);
    }
    else {
        printf("두수 같음");
    }
    */
   /* printf("점이 몇 사분면에 있나요?");
    int x,y;
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0)
    {
        printf("1사분면");
    }
    else if (x < 0 && y > 0)
    {
        printf("2사분면");
    }
    else if (x < 0 && y < 0)
    {
        printf("3사분면");
    }
    else if (x > 0 && y < 0)
    {
        printf("4사분면");
    }
    else
    {
        printf("어느 사분면에도 속하지않음");
    }
    */
   /* int x, y, res;
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0) res = 1;
    else if (x < 0 && y > 0) res = 2;
    else if (x < 0 && y < 0) res = 3;
    else res = 4;
    printf("%d사분면", res);
    */

    //초를 입력받습니다. 
    //입력받은 초를 계산하여 다음과 같이 출력하세요.
    // 초
    //hh 시간 mm분 ss초
    int s;
    scanf("%d", &s);
    if (s < 60)
    {
        printf("%d초", s);
    }
    else if(s<3600)
    {
        printf("%d분 %d초", s / 60, s % 60);
    }
    else
    {
        printf("%d시간 %d분 %d초", s / 3600, (s % 3600)/60,s%60);
    }
    
    /*int se=3777;
    int mm = se / 60;
    int ss = se % 60;
    int hh = mm / 60;
    mm %= 60;
    printf("%d초는 %d시간 %d분 %d초", se, hh, mm, ss); */





    return 0;








}


