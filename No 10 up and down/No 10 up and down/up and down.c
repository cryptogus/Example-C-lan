#include <stdio.h>

int main(void)
{
    int unknown = 0;
    int input = 0;

    printf("up and down\n");
    printf("사회자는 숫자을 입력해 주세요 : ");
    scanf_s("%d", &unknown);




    while (unknown != input) {
        printf("플레이어는 숫자를 맞추시오 : ");
        scanf_s("%d", &input);
        if (unknown > input)
            printf("정답이 더 큽니다.\n");
        else if (unknown < input) {
            printf("정답이 더 작습니다.\n");
        }
    }
    printf("MISSION COMPLITE");

    return 0;
}