#include <stdio.h>        // printf 함수를 사용하기 위해!
#include <time.h>         // time 함수를 사용하기 위해!
#include <stdlib.h>       // srand, rand 함수를 사용하기 위해!
#define MAX_COUNT    6  // 주사위를 6회 굴린다!

int main()
{
    int i, side[6] = { 0, };

    printf("주사위를 %d번 굴려서 나온 결과입니다.\n", MAX_COUNT);
    // 현재 시간 값으로 난수 발생의 기준 값을 설정한다.
    srand((unsigned int)time(NULL));

    for (i = 0; i < MAX_COUNT; i++) {
        // 0 ~ 5사이의 난수를 발생하여 해당 항목의 값을 1증가 시킨다!
        side[rand() % 6]++;
    }

    // 주사위의 각 면이 몇 번씩 나왔는지 출력한다.
    for (i = 0; i < 6; i++) {
        // i 변수가 0 ~ 5의 가지기 때문에 주사위 숫자로 표현하고 싶다면
        // i + 1을 사용하여 1 ~ 6으로 출력되게 만들어야 합니다.
        printf("%d번: %d\n", i + 1, side[i]);
    }
    return 0;
}