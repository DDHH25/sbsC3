#include <stdio.h>

int main()
{
    // Byte : 데이터를 처리하는 최소 단위
    // Bit : 0,1을 저장할수 있는 데이터 표현의 최소 단위
    // 1 Byte : 8bit
    // 정수 : char(1byte), short(2byte), int(4byte), long(W:4, m:8), long long(8byte)
    // 실수 : float(4byte), double(8byte), long double(W, M)
    char n;// -128 ~ 0 ~ 127 2^8개의 서로 다른 데이터를 저장가능
    short num;// 2^16개의 서로 다른 데이터를 저장가능
    int score;// 2^32개의 서로 다른 데이터를 저장가능
    long money;//2^32개의 서로 다른 데이터를 저장가능
    long long big_number; //2^64개의 서로 다른 데이터를 저장가능
    // sizeof 연산자(operator): 타입 또는 변수의 크기를 바이트 단위로 알려준다.
    printf("n의 크기: %d\n", sizeof(n));
    printf("num의 크기 %d\n", sizeof(short));
    printf("score의 크기: %d\n", sizeof(int));
    printf("money의 크기: %d\n", sizeof(money));
    printf("big_number의 크기: %d\n", sizeof(long long));
    printf("double의 크기: %d\n", sizeof(double));
    
    n = 127;
    printf("n의 값: %d\n", n);

    n = 128;    //char형식으로는 128을 저장할 수 없다
    printf("n의 값: %d\n", n);

    n = 100;
    printf("n의 값: %o\n", n);
    printf("n의 값: %x\n", n);
    printf("n을 문자로 표현: %c\n", n);

    double d = 100.0;
    printf("d의 값: %f\n", d);
    printf("d의 값: %e\n", d);
    //형식 문자(Formatted String)
    //%d: 값을 정수형으로 표현
    //%u: 값을 양의 정수형으로 표현, unsigned의 약자
    //%f: 값을 실수형으로 표현
    //%x, %X: 값을 16진수로 표현
    //%o: 값을 8진수로 표현 
    //%e: 값을 지수형으로 표현
    //%c: 값을 문자로 표현


    n = 'A';       // n=65;
    printf("n을 문자로 표현: %c\n", n);


    //10
    printf("숫자의 출력: %5d\n", 10); //정수를 출력할때 자릿수 5칸을 확보한 뒤 오른쪽 정렬하여 출력
    printf("숫자의 출력: %-5d\n", 10); //정수를 출력할때 자릿수 5칸을 확보한 뒤 왼쪽 정렬하여 출력

    printf("실수의 출력:%6.2f\n", 180.78); // 소수점 포함하여 6자리를 확보한뒤 소수점 이하를 두자리까지만 표현
    //123888875757.434
    printf("실수의 출력:%.2f\n", 123888875757.434);// 정수부분은 그대로 출력하고 소숫점 이하는 두자리까지만 표현


    n = 10;
    big_number = 123456789;
    score = 12345;
    num = 5;
    money = 122;
    //기본: %d는 int 크기에 기본적으로 맞쳐줘 있음 
    printf("%d\n", n);
   

    printf("%hd\n", num); //short형 출력
    printf("%hhd", n);       //char형 출력

    printf("%ld\n", money);     //long형 출력
    printf("%lld\n", big_number); // long long형 출력

    unsigned char age;  // 0~255까지 표현(저장)가능
    age = 80;
    printf("%hhu\n", score);

    unsigned long lsize = 987654321;
    printf("%lu\n", lsize);
   

    /*
    * %d와  %u의 세분화
    * %hhd(u),%hd(u), 
    * 
    * 
    */

    return 0;
}
