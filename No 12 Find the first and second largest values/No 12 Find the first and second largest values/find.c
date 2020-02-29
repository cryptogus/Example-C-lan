#include <stdio.h>

void find_two_largest(int a[], int n, int* largest, int* sec_largest)
{
	*largest = a[0];
	*sec_largest = a[0];
	for (int i = 1; i < n; i++) {
		if (*largest < a[i])
			*largest = a[i];
	}
	for (int i = 1; i < n; i++) {
		if (a[i] < *largest) {
			if (*sec_largest < a[i])
				*sec_largest = a[i];
		}
	}
}

int main()
{
	int largest, sec_largest;
	int a[] = { 1,11,3,18,8 };
	find_two_largest(a, sizeof(a) / sizeof(a[0]), &largest, &sec_largest);
	//sizeof(a)�� 5���� int�� ũ�� �� 20bye
	printf("�Լ������� ���� ū ����: %d\n", largest);
	printf("�Լ� ������ �ι�°�� ū ����: %d\n", sec_largest);

	return 0;
}