#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ͳ��num������1�ĸ���
int main()
{
	int i = 0;
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	for (i = 0;i < 32;i++)
	{
		if ((num >> i)&1 == 1)
		{
			count++;
		}
	}
	/*while (num)
	{
		if (num % 2 == 1)
		{
			count++;
		}
		num = num / 2;
	}*/
	printf("%d\n", count);
	return 0;
}


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