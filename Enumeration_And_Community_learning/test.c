#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��С���жϷ���
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//	/*int a = 1;
//	return *(char*)&a;*/
//}
//int main()
//{
//	int ret = check_sys();
//	if (1 == ret)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}



//����-ֻ��ʹ��һ������
union Un
{
	char c[10];
	int i;
};
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	
	/*
	printf("%p\n", &u);

	printf("%p\n", &(u.c));
	printf("%p\n", &(u.i));*/
	return 0;
}



//ö��
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color
//{
//	RED=2,
//	GREEN=4,
//	BLUE=8
//};
//int main()
//{
//	//enum Sex s = MALE;
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	printf("%d %d %d\n", RED , GREEN , BLUE);
//	return 0;
//}