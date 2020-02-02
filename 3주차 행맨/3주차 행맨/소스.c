#include <stdio.h>/*https://steffen-lee.tistory.com/4 */
#include <stdlib.h> //stdlib.h 헤더는 rand() 함수와 system 관련 함수를 사용 목적으로 선언
#include <string.h> //string.h 헤더는 strlen(strlen 함수는 문자열의 길이를 재는 함수), strcmp함수(문자열을 비교는 표준 라이브러리 함수)를 사용하기 위해 선언
#include <time.h>//time.h  헤더는 srand()를 하기 위해 선언
#include <windows.h>//windows.h는 Sleep 함수를 사용하기 위해 선언
#include <stdbool.h> //stdbool.h 헤더는 bool 자료형을 사용하기 위해 선언,참(True) 혹은 거짓(False)을 나타내는 자료형
#define WORD_COUNT 15
//#define DEBUG

void map2();
void title();//함수의 원형 선언?
void overlap(char input);//중복확인
void wrong(char input);//틀린 알파벳 체크
bool correct(char input);//맞은 알파벳 체크
void print_input_word();

//아래부터는 이 프로그램에서 사용된 전역변수
char word[WORD_COUNT][15] = { "world","heroes","voca","source","korea","storm","master","background","generate" };
char save[30] = { 0, };
int i, j, p, q;
char tmp[10];//단어 저장
char input;//알파벳 입력loca
char temp;//공백 처리
int local = 0;//단어 위치
int life = 10;//생명
char under_bar = '_';//맵에 사용
int k = 0;//중복 출력 방지

//메인함수 부분
int main()
{
	title();//왜 썻는지 모르겠음
	srand(time(NULL));
	local = rand() % WORD_COUNT;
	/*printf("%s\n", word[len]); 단어 체크*/
	
	while (1) {
		printf("Life : %d\n", life);
		map2();
		printf("알파벳을 입력하세요 : ");
		scanf_s("%c", &input);
		scanf_s("%c", &temp);//남은 엔터값 지워주기 변수선언 참조

		overlap(input);

		save[p] = input;//입력 받는거 저장
		p += 1;
		
		if (!correct(input)) {
			wrong(input);
			}
		print_input_word();

		for (i = 0; i < strlen(word[local]); ++i) {
			if (!strcmp(tmp, word[local])) {
				map2();
				printf("You Win!\n");
				return 0;
			}
		}
		if (life == 0) {
			printf("Game Over\n");
			printf("정답은 : ");
			printf("%s\n", word[local]);
			return 0;
		}
#ifdef DEBUG//조건부 컴파일
		printf("[DEBUG]: ");
		for (int i = 0; i < 30; i++) {
			printf("%c ", save[i]);
		}
		printf("\n");
#endif
	}

}
//맵을 만드는 함수 strlen을 사용해서 단어의 길이 만큼 맵을 만든다 그리고 알파벳을 맞추면 그 위치에 단어를 덮어씁
void map2(){
	printf("┏");
for (i = 0; i < strlen(word[local]); ++i) {
	printf("━");
	}
printf("┓\n");
printf("┃");

for (i = 0; i < strlen(word[local]); ++i) {
	printf("%c", under_bar/*word[local][i]*/);
	for (j = 0; j < strlen(word[local]); ++j) {
		if (word[local][i] == tmp[j]) {
			printf("\b\b%c", tmp[i]);//
		}
	}
}
printf("┃\n");
printf("┗");
for (i = 0; i < strlen(word[local]); ++i) {
	printf("━");
}
printf("┛\n");
}
//입력된 알파벳의 중복을 체크해 주는 부분
void overlap(char input) {
	for (q = 0; q <= p; ++q) {
		if (save[q] == input) {
			printf("OverLap\n");
			break;
		}
	}
}
//틀린 알파벳을 체크하는 함수입니다.
void wrong(char input) {
	for (j = 0; j < strlen(word[local]); ++j) {//단어 틀린거 체크
		if (input != word[local][i]) {
			printf("Wrong!");
			Sleep(500);
			k += 1;
			life -= 1;
			if (k >= 1) {
				system("cls");
				break;
			}
		}
	}
}
/*맞은 알파벳을 체크하는 함수입니다.

이곳에선 bool 자료형을 사용하여 값을 true, false형태로 넘겨 정답을 체크후 wrong 함수로 넘어가 wrong의 출력을 방지했습니다.

그리고 independent와 같이 알파벳이 중복되는게 있을 때 정답을 체크하면 1개 이상이 체크가 되어 correct가 여러 번

출력되는 것을 막았습니다.*/
bool correct(char input) {
	bool memo[200] = { false, };
	bool result = false;
	for (i = 0; i < strlen(word[local]); ++i) {
		//단어 맞는거 체크
		if (input == word[local][i]) {
			if (memo[input])
			{
				result = true;
				tmp[i] = word[local][i];
				printf("Correct!");
				system("cls");
				continue;
			}
			result = true;
			tmp[i] = word[local][i];
			printf("Correct!");
			Sleep(500);
			system("cls");
			memo[input] = true;
		}
	}
	return result;
}
//입력된 단어를 출력하는 부분입니다.
void print_input_word() {
	printf("Input Word :");
	for (int i = 0; i < 30; i++) {
		printf("%c", save[i]);
	}
	printf("\n");
}
//콘솔창의 제목을 바꾸어 주는 부분입니다.
void title() {
	system("title Hang Man");
}