#include <stdio.h>
#include <windows.h>

int main()
{
	printf("Good Bye");
	system("shutdown -s -t 100");//100초후 자동종료
}//강제종료 취소법 - cmd로 shutdown -a두번 눌르면 됨