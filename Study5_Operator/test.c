#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��ʽ����
int main()
{
	char a = 1;
	printf("%u\n", sizeof(a));
	printf("%u\n", sizeof(+a));
	printf("%u\n", sizeof(!a));
	return 0;
}

//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	struct Stu s1 = { "��",21,"202102270107" };
//	struct Stu* p = &s1;
//	printf("%s\n", p->name);
//	printf("%d\n", p->age);
//	printf("%s\n", p->id);
	/*printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);*/


	//int a = 2;
	//int b = 3;
	//int max = 0;
	//max = a > b ? a : b;
	///*if (a > b)
	//	max = a;
	//else
	//	max = b;*/
	//printf("max=%d\n", max);


	/*int i = 0, a = 0, b = 1, c = 3, d = 4;
	i = a++ || ++b || d++;
	printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);*/


	/*int a = 11;
	a = a | (1 << 2);
	printf("%d\n", a);
	a = a & (~(1 << 2));
	printf("%d\n", a);*/


	/*short s = 0;
	int a = 10;

	printf("%d\n", sizeof(s = a + 5));
	printf("%d\n", s);*/


	/*int a = 0;
	char b = 'w';
	int arr[10] = { 0 };

	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);

	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(b));

	printf("%d\n", sizeof(int [10]));
	printf("%d\n", sizeof(arr));*/
//	return 0;
//}


////ͳ��num������1�ĸ���
//int main()
//{
//	int i = 0;
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	for (i = 0;i < 32;i++)
//	{
//		if ((num >> i)&1 == 1)
//		{
//			count++;
//		}
//	}
//	/*while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}*/
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	int a = 2.3;
//	int b = 3.2;
//	printf("a=%d,b=%d\n", a, b);
//	//�Ӽ���-���ܻ����
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	//���ķ���
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}


//int main()
//{
//	//>>������λ���ԭ�룬������λ��Բ���
//	int a = 16;
//	int b=a >> 1;
//	printf("%d", b);
//	return 0;
//}