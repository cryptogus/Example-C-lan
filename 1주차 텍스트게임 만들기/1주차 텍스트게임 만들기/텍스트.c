#include <stdio.h>
#include <stdlib.h>
#include <time.h>//���� �Լ������ ���� ��ó����
int main(void)
{

    int select = 0;
    int select2;
    int select3;
    int select4;
    int sword = 1;//����  ���ݷ��� 1

    printf("                                                                         \n");//\n�� �ٹٲ�
    printf("                                                                         \n");
    printf("                                    -----------                              \n");
    printf("----------------------------  ��Mud Game�� Python�ְ�...  ----------------------------\n");
    printf("                                    -----------                              \n");
    printf("                                                                         \n");
    /*�ʱ�ȭ��*/
    

    printf("�ذ��ӽ��� - 1\n");
    printf("�س����� - 2\n");
    /*printf("�÷��̾��� �̸���?");gether?, scanf("%c",name);*/
    
    scanf("%d",&select);/*�Է��Լ� scanf, &seclct�� ������ ������ �����ּҿ� �Է°��� �����ϰڴٴ� �� sele*/

    if (select == 1) {
        printf("������(������)��(��) �����ϼ̽��ϴ�.\n");
        printf("1.����\n");
        printf("2.�Ĵ�\n");
        printf("3.��ȭ��\n");
        printf("4.���������� ������\n");
    }
    else {
        printf("�α׾ƿ� �Ұ�\n");
        printf("������(������)��(��) �����ϼ̽��ϴ�.\n");
        printf("1.����\n");
        printf("2.�Ĵ�\n");
        printf("3.��ȭ��\n");
        printf("4.���������� ������\n");
    }/*���ǹ�*/

    scanf("%d",&select2);
    if (select2 == 3) {
        printf("��ȭ�ҿ� �������!\n");
        int select = 0;
        while (select != 2) {
            printf("1. ��ȭ�ϱ�\n");
            printf("2. ����ȭ������ ���ư���\n");

            scanf("%d",&select4);
            if (select4 == 1) {
                printf("���� ���� ���ݷ�:%d\n", sword);
                int random = rand() % 100; //��ȭȮ���� �������ֱ� �����Լ�
                if (random < 50) {
                    printf("��ȭ����!!\n");
                    sword = sword + 1;
                    printf("���� ���ݷ�:%d\n", sword);
                }
                else {
                    sword = sword - 1;
                    printf("��ȭ����! ���ǰ��ݷ�:%d\n", sword);
                }
            }
        }
    }else if(select2 == 4){
        int hp = 30;
        int daram_hp = 5;
        int daram_attack = 1;
        int select5 = 0;
        printf("�߻��� �ٶ��㰡 ��Ÿ����!\n");
        printf("1.�ο��\n");
        printf("2.����\n");
        printf("3.���ϸ�\n");
        printf("4.����ġ��\n");
        scanf("d%",&select5);
        if (select5 == 1) {
            printf("�ٶ��� ü��:%d\n", daram_hp);
            printf("�������� %d�� ���ݷ����� �ٶ��㸦 �����ߴ�\n", sword);
            daram_hp = daram_hp - sword;
            printf("������  hp:%d", hp);
            printf("�ٶ���� %d�� ���ݷ����� �������� �����ߴ�\n", daram_attack);
            hp = hp - daram_attack;
            printf("������  hp:%d", hp);
            printf("ȿ���� �پ��!");
        }
        else if (select5 == 4) {
            printf("������ �ٶ��㿡�Լ� �����\n");
        }
     
    }
    else { printf("���� ����� ������ �ʾҽ��ϴ�. �ڵ����� ���α׷��� ����˴ϴ�"); }
}