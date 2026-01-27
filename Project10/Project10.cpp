#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    //사칙 연산 수행하는 계산기 프로그램 만들기, 두개의 정수와 연산자를 입력받아서 해당 연산 수행하기, x누르면 종료

    int n1, n2;
    char ch1,tmp;
    do
    {
        printf("첫번째 정수를 입력하세요: ");
        scanf("%d", &n1);
        printf("다음 연산자 중 하나를 입력하세요(+,-,*,/), x 입력시 종료: ");
        scanf("%c", &tmp);
        scanf("%c", &ch1);
        scanf("%c", &tmp);
        printf("두번째 정수를 입력하세요: ");
        scanf("%d", &n2);

        switch (ch1)
        {
        case '+':
            printf("\n %d+%d=%d\n", n1, n2, n1 + n2);
            break;
        case '-':
            printf("\n%d-%d=%d\n", n1, n2, n1 - n2);
            break;
        case '*':
            printf("\n%d*%d=%d\n", n1, n2, n1 * n2);
            break;
        case '/':
            printf("\n%d/%d=%d\n", n1, n2, n1 / n2);
            break;
        case 'x':
            break;
        default:
            printf("연산자를 잘못 입력했습니다. 다시 입력해주세요.\n");
        }
        printf("\n");
        } while (ch1 != 'x');

        printf("프로그램이 종료되었습니다.");


        return 0;
    }


