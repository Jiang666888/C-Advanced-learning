#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

//int main()//自动关机
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请输入你好，否则电脑关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "你好")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//void menu()//猜数字
//{
//	printf("*******************************\n");
//	printf("**** 1.进入游戏 2.退出游戏 ****\n");
//	printf("*******************************\n");
//}
//
//void game()
//{
//	int ret = 0;
//	int guest = 0;
//	ret = rand()%100+1;
//	while (1)
//	{
//		printf("请输入数字：\n");
//		scanf("%d", &guest);
//		if (guest > ret)
//		{
//			printf("猜大了！\n");
//		}
//		else if (guest < ret)
//		{
//			printf("猜小了！\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int) time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏结束\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//int main()//乘法表
//{
//	int i = 0;
//	int j = 0;
//	int mul;
//	for (i = 1;i < 10;i++)
//	{
//		for (j = 1;j <= i;j++)
//		{
//			mul = i * j;
//			printf("%d*%d=%-2d ",i,j,mul);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()//求最大值
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1;i < 10;i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


//int main()//累加
//{
//	int i = 0;
//	double sum=0.0;
//	int c=1;
//	for (i = 1;i < 100;i++)
//	{
//		sum+=c*1.0 / i;
//		c = -c;
//	}
//	printf("sum=%lf", sum);
//	return 0;
//}

//int main()//求素数
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101;i <= 200;i+=2)
//	{
//		for (j = 2;j <= sqrt(i);j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//
//int main()//最小公约数
//{
//	int m = 15;
//	int n = 24;
//	int r = 0;
//	while (r=m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//int main()//比大小
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d%d%d", &a, &b, &c);//3 1 2
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}