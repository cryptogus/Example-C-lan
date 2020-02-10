#include <stdio.h>
#include <stdlib.h>

const int SUCCESS = 1;
const int FAIL = 2;
const int LIMIT = 3;

const int AdminID = 95;
const int AdminPass = 980102;

int LoginCount = 0;
int check(int id, int password) {
	LoginCount++;
	if (LoginCount == LIMIT)
	{
		return LIMIT;
	}
	if (AdminID == id && AdminPass == password)
	{
		return SUCCESS;
	}
	if (AdminID != id || AdminPass != password)
	{
		return FAIL;
	}
}
int main()
{
	int id, password, result;
	while (1)
	{
		printf("id:__\b\b");
		scanf_s("%d", &id);
		printf("pass:______\b\b\b\b\b\b");
		scanf_s("%d", &password);
		result = check(id, password);
		if (result == SUCCESS)
		{
			printf("Login Success\n");
			break;
		}
		if (result == FAIL) {
			printf("ID or PASSWORD ERROR!\n");
		}
		if (result == LIMIT)
		{
			printf("È½¼öÃÊ°ú!!!\n");
			break;
		}
	}
	return 0;
}