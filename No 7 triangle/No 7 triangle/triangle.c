#include <stdio.h>

int main()
{
	int n;
	int line, space, star;
	printf("�ﰢ�� ����:");
	scanf_s("%d", &n);
	for (line = 0; line < n; line++)//n�� ����
	{
		for (space = 0; space < (n - line); space++)//���� n-line��
		{
			putchar(' ');
		}
		for (star = 0; star < (2 * line + 1); star++)//�� 2*line + 1��
		{
			putchar('*');
		}
		putchar('\n');//����
	}
	return 0;
}
