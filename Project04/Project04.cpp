#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//연산자: operators
	
// 산술연산자: + - * / %
// 대입연산자: = += -= *= /= %=
	// 증감연산자 ++ --
	// 비교연산자 > >=  <= ==  != <
	//논리연산자 && ㅣㅣ !
	//삼향연산자 ? :
	//비트연산자 << >> & ㅣ ^ ~

	int n1 = 5;
	int n2 = 3;
	int n3 = n1 + n2;
	printf("%d+%d=%d\n", n1, n2, n3);

	n3 = n1 - n2;
	printf("%d-%d=%d\n", n1, n2, n3);
	n3 = n1 * n2;
	printf("%d*%d=%d\n", n1, n2, n3);
	n3 = n1 / n2;
	printf("%d/%d=%d\n", n1, n2, n3);

	float f1 = n1 / n2;
	printf("%d/%d=%f\n", n1, n2, f1);

	float f2 = (float)n1 / n2;
	printf("%d/%d=%f\n", n1, n2, f2);

	n3 = n1 % n2;
	printf("%d %% %d=%d\n", n1, n2, n3);

	//대입 연산자

	n3 = n1; //n1에 있는 값을 n3에 대입시켜라
	n3 += n1; // n3=n3+n1
	printf("n1=%d, n3=%d\n", n1, n3);
	n3 *= n1;
	n3 -= n1;
	n3 /= n1;
	n3 %= n1;

	// 증감 연산자: ++ --
	n1 = 0;
	n1++;	//n1=n1+1;
	n1--; 
	++n1;
	--n1;
	//printf("정수를 입력하세여:");
//scanf("%d",&n1);
	printf("입력값: %d\n", n1);
	printf("n1++: %d\n", n1++);	//10=>11     post fix
	printf("n1++: %d\n", n1++); //11=>12
	printf("++n1: %d\n", ++n1); // 13		pre fix
	printf("n1: %d\n", n1); 

	//(비교)연산자 : 연산의 결과는 참 또는 거짓이다.
	n1 = 5;
	n2 = 3;
	n3 = n1 > n2; //참(0이 아닌 값이 저장); //참(0이 아닌 값이 저장)
	n3 = n1 < n2;//거짓
	printf("n3=%d\n", n3);
	printf("%d==%d의 결과? %d\n", n1, n2, n1 == n2);
	printf("%d!=%d의 결과? %d\n", n1, n2, n1 != n2);

	//논리연산자: &&, ||, !			연산의 결과는 참 또는 거짓
	n3 = n1 > n2 && n1 == n2;	//0
	printf("%d > %d && %d==%d의 결과? %d\n", n1, n2, n1, n2, n3);
	n3 = n1 > n2 || n1 == n2;	//1
	printf("%d > %d && %d | | %d의 결과? %d\n", n1, n2, n1, n2, n3);
	n3 = !(n1 == n2);
	printf("!(%d ==%d)의 결과? %d\n", n1, n2, n3);

	//삼항연산자
	//조건식(관계식, 논리식, 산술식) ? 조건식이 참일때 반환값: 조건식이 거짓일때 반환값
	printf("%s", n1 % 2 ? "홀수" : "짝수");

	n3 = n1 % 2 ? 1 : -1;



	return 0;	//즉시 함수 종료 시킨다, 

}

