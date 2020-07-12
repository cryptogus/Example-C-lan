#include <stdio.h>        // printf �Լ��� ����ϱ� ����!
#include <time.h>         // time �Լ��� ����ϱ� ����!
#include <stdlib.h>       // srand, rand �Լ��� ����ϱ� ����!
#define MAX_COUNT    6  // �ֻ����� 6ȸ ������!

int main()
{
    int i, side[6] = { 0, };

    printf("�ֻ����� %d�� ������ ���� ����Դϴ�.\n", MAX_COUNT);
    // ���� �ð� ������ ���� �߻��� ���� ���� �����Ѵ�.
    srand((unsigned int)time(NULL));

    for (i = 0; i < MAX_COUNT; i++) {
        // 0 ~ 5������ ������ �߻��Ͽ� �ش� �׸��� ���� 1���� ��Ų��!
        side[rand() % 6]++;
    }

    // �ֻ����� �� ���� �� ���� ���Դ��� ����Ѵ�.
    for (i = 0; i < 6; i++) {
        // i ������ 0 ~ 5�� ������ ������ �ֻ��� ���ڷ� ǥ���ϰ� �ʹٸ�
        // i + 1�� ����Ͽ� 1 ~ 6���� ��µǰ� ������ �մϴ�.
        printf("%d��: %d\n", i + 1, side[i]);
    }
    return 0;
}