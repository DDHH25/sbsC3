#include <stdio.h>

//콘솔 입출력 함수가 정의된 헤더 파일
//윈도우즈 OS에서만 사용가능(MSC컴파일러에서만 지원)
#include<conio.h>

int main()
{
    //while 반복문, while(조건식)
    //조건식의 결과에 따라 한번 반복실행되지 않을 수 있다
    //반복 조건을 먼저 판단하고 반복에 들어간다.
    //반복해야할 횟수가 명확하지않을때 주로 사용됨
    int i = 0;
    while (i < 5)
    {
        printf("i=%d\n", i + 1);
        i++;
    }
    //I=5

    i = 0;
    while (i++ < 15)  printf("=");

    i = 0;
    int total = 0;;
    while (i++ < 10) total += i;
        printf("%d\n", total);

    i = 1;
    total = 0;
    while (i <= 10)
    {
        total += i;
        i++;
    }
    printf("total=%d\n", total);


    i = 0;
    total = 0;
    while (i<=10)
    {
        total += i;
        i += 2;
        
    }
    printf("%d\n", total);

    //
    
    //0부터 10까지의 짝수의 합을 구하기

    //구구단 출력
    i = 1;
    while (i < 10)
    {
        printf("2 x %d= %d\n", i, i * 2);
        i++;
    }
    int ch = 0;
    while (ch!='x')
    {
        printf("\n종료하려면 'x를 입력하세요: ");
        //_getch();
         ch = _getch(); //conio,h이 포함되어 있어야함
        printf("%c", ch);

    }
    //1부터 100까지의합을 구하세요
    i = 1;
    total = 0;
    while (1) //무한 반복
    {
        total += i;
        i++;
        //반복문 안에서 탈출조건을 체크하여 탈출시킴
        if (i > 100) break; //반복문을 즉시 탈출시킴

    }
    printf("total=%d\n", total);

    //반복문 중첩시키기
    int dan = 2;
    while (dan <= 9)
    {
      //printf("--- %d단 ---\n", dan);
        i = 1;
        while (i < 10)
        {
            printf("%d x %d= %d\n", dan, i, i * dan);
            i++;
        }
       
        dan++;
    }
    
    dan = 2;
    i = 1;
    while (i<10)
    {
        //printf("--- %d단 ---\n", dan);
        
        while(dan<10)
        {
    
            printf(" %d x %d = %d\t ", dan, i, i * dan);
            dan++;
           
        }
        printf("\n");
        dan = 2;
        i++;
    }

    //1~99까지 테이블 모양으로 출력하기
    i = 1;
 int tate = 0;
    while (i < 100)
    {
        printf("%d\t", i);
        i++;
        tate++;
        if (tate == 10)
        {
            printf("\n");
            tate = 0;
        }

    }





    return 0;
    
}
