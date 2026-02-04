#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> // Standard Input/Output, 표준 입출력에 관한 함수들 정의
#include <string.h> // 문자열 처리에 관련된 함수들이 정의
//함수: 특정 목적을 처리하기 위한 코드를 처리의 이름을 부여하여
//정의한것

//함수의 정의
//void:없다, 모른다
void print_int(int number)
{
//void함수는 호출 후에 결과를 반환하지 않는 함수이다.
	printf("정수: %d\n", number);
}
//add함수는 반환값의 데이터 타입 정의를 int형으로 했으므로
//반드시 함수 내부에서 정수형 값을 반환해야 한다.
//함수명(매개변수)
//매개변수: parameter, argument, 인수, 인자
//정의하기에 따라서 필요시 지정할수도 있고 안할수도 있다.
int add(float number1, float number2)
{
	//return:호출부에 결과를 반환하면서 이 함수를 즉시 종료시킴
	return(number1 + number2); 

}

void show_menu()
{
	printf("1. 새파일\n");
	printf("2. 파일 저장\n");
	printf("3. 파일 열기\n");
	printf("x. 종료");
}
//매개변수도 없고, 반환값도 없는 함수도 있다
int main() 
{
	print_int(1); //print_int()함수의 호출
	print_int(2); //함수의 호출은 반드시 먼저 정의가 되어있어야함
	print_int(3);
	show_menu();
	int a = add(10, 5);
	printf("\n%d\n",a);

	return 0;
}






















