#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�жϵ�ǰ�������ֽ���
int check_sys()
{
	int a = 1;
	return *(char*)&a;
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}