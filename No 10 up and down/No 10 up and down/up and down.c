#include <stdio.h>

int main(void)
{
    int unknown = 0;
    int input = 0;

    printf("up and down\n");
    printf("��ȸ�ڴ� ������ �Է��� �ּ��� : ");
    scanf_s("%d", &unknown);




    while (unknown != input) {
        printf("�÷��̾�� ���ڸ� ���߽ÿ� : ");
        scanf_s("%d", &input);
        if (unknown > input)
            printf("������ �� Ů�ϴ�.\n");
        else if (unknown < input) {
            printf("������ �� �۽��ϴ�.\n");
        }
    }
    printf("MISSION COMPLITE");

    return 0;
}