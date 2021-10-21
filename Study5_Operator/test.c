#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//统计num补码内1的个数
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
//	//加减法-可能会溢出
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	//异或的方法
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}


//int main()
//{
//	//>>正数移位针对原码，负数移位针对补码
//	int a = 16;
//	int b=a >> 1;
//	printf("%d", b);
//	return 0;
//}