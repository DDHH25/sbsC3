#define     _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//배열을 매개변수로 받는 함수를 정의할때는 반드시
//배열의 주소와 배열의 아이템들의 개수를 같이 넘겨주어야 한다!
void print_array(int arr[], size_t count)
{

// printf("print_array함수에서 출력함: arr[5]=%d\n", arr[5]);
printf("arr의 주소:%p\n", arr);
for (int i = 0; i <count ; i++)
{
printf("%d\t", arr[i]);
}
}

void print_value(int n)
{
printf("%d\t", n);
}


int main()
{
int a = 10;
int b = 4;
print_value(a);
print_value(b);
int* p; //8바이트
char sz[100];

int arr[100];
printf("arr의 주소: %p\n", arr);
printf("arr[0]의 주소: %p\n", &arr[0]);
printf("arr[1]의 주소: %p\n", &arr[1]); 

p = arr;

int n = 10;

int arr2[200];


for (int i = 0; i < 100; i++)
{
arr[i] = i + 1;
}
for (int i = 0; i < 200; i++)
{
arr2[i] = i + 1;
}



printf("arr[5]=%d\n", arr[5]);
printf("arr[5]=%d\n", p[5]);

print_array(arr,100);
printf("\n\n\n");
print_array(arr2,200);

return 0;
}