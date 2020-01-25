#include <stdio.h>
#include <stdlib.h>
#include <time.h>//랜덤 함수사용을 위한 전처리기
int main(void)
{

    int select = 0;
    int select2;
    int select3;
    int select4;
    int sword = 1;//무기  공격력이 1

    printf("                                                                         \n");//\n은 줄바꿈
    printf("                                                                         \n");
    printf("                                    -----------                              \n");
    printf("----------------------------  ☆Mud Game☆ Python최고...  ----------------------------\n");
    printf("                                    -----------                              \n");
    printf("                                                                         \n");
    /*초기화면*/
    

    printf("※게임시작 - 1\n");
    printf("※끝내기 - 2\n");
    /*printf("플레이어의 이름은?");gether?, scanf("%c",name);*/
    
    scanf("%d",&select);/*입력함수 scanf, &seclct은 위에서 선언한 변수주소에 입력값을 저장하겠다는 뜻 sele*/

    if (select == 1) {
        printf("경종인(교수님)이(가) 입장하셨습니다.\n");
        printf("1.상점\n");
        printf("2.식당\n");
        printf("3.강화소\n");
        printf("4.마을밖으로 나가기\n");
    }
    else {
        printf("로그아웃 불가\n");
        printf("경종인(교수님)이(가) 입장하셨습니다.\n");
        printf("1.상점\n");
        printf("2.식당\n");
        printf("3.강화소\n");
        printf("4.마을밖으로 나가기\n");
    }/*조건문*/

    scanf("%d",&select2);
    if (select2 == 3) {
        printf("강화소에 어서오세요!\n");
        int select = 0;
        while (select != 2) {
            printf("1. 강화하기\n");
            printf("2. 시작화면으로 돌아가기\n");

            scanf("%d",&select4);
            if (select4 == 1) {
                printf("현재 검의 공격력:%d\n", sword);
                int random = rand() % 100; //강화확률을 구현해주기 위한함수
                if (random < 50) {
                    printf("강화성공!!\n");
                    sword = sword + 1;
                    printf("검의 공격력:%d\n", sword);
                }
                else {
                    sword = sword - 1;
                    printf("강화실패! 검의공격력:%d\n", sword);
                }
            }
        }
    }else if(select2 == 4){
        int hp = 30;
        int daram_hp = 5;
        int daram_attack = 1;
        int select5 = 0;
        printf("야생의 다람쥐가 나타났따!\n");
        printf("1.싸우다\n");
        printf("2.가방\n");
        printf("3.포켓몬\n");
        printf("4.도망치다\n");
        scanf("d%",&select5);
        if (select5 == 1) {
            printf("다람쥐 체력:%d\n", daram_hp);
            printf("교수님은 %d의 공격력으로 다람쥐를 공격했다\n", sword);
            daram_hp = daram_hp - sword;
            printf("교수님  hp:%d", hp);
            printf("다람쥐는 %d의 공격력으로 교수님을 공격했다\n", daram_attack);
            hp = hp - daram_attack;
            printf("교수님  hp:%d", hp);
            printf("효과는 뛰어났다!");
        }
        else if (select5 == 4) {
            printf("무사히 다람쥐에게서 벗어났다\n");
        }
     
    }
    else { printf("아직 기능을 만들지 않았습니다. 자동으로 프로그램이 종료됩니다"); }
}