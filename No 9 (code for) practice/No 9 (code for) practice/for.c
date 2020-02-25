#include <stdio.h>

int main()
{//Rectangle
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	//a right triangle-1
	for (int a = 0; a < 5; a++) {
		for (int b = 0; b <= a; b++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	//a right triangle-2
	for (int c = 0; c < 5; c++) {
		for (int d = 0; d < 5 - c; d++)
		{
			printf("*");
		}
		printf("\n");
	}
	//Pyramid -1
	int num = 5;
	for (int i = 0; i < num; i++) {
		for (int j = num - 1; j > i; j--) {
			printf(" ");
		}

		for (int j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	//Pyramid -2
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}

		for (int j = 2 * num - 1; j > 2 * i; j--) {
			printf("*");
		}
		printf("\n");
	}
}