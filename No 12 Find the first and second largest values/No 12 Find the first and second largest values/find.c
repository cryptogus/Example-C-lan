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
	//sizeof(a)는 5개의 int형 크기 즉 20bye
	printf("함수내에서 가장 큰 값은: %d\n", largest);
	printf("함수 내에서 두번째로 큰 값은: %d\n", sec_largest);

	return 0;
}