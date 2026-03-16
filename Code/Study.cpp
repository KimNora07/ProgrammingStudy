#include <stdio.h>

using namespace std;

int main()
{
    // printf
    //printf("Hello World!\n");

    // scanf
    // int num;
    // scanf("%d", &num);
    // printf("%d", num);

    // scanf 여러개의 서식 사용
    float weight;
    int age;
    char gender;

    scanf("%f %d %c", &weight, &age, &gender);
    printf("체중: %f\n 나이: %d\n 성별: %c", weight, age, gender);

    return 0;
}