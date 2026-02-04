

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
