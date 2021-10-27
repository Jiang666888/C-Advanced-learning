#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <string.h>

#include "app.h"

//冒泡排序法
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		int flat = 1;
//		for (j = 0;j < sz - 1 -i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flat = 0;
//			}
//		}
//		if (flat = 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0;i < sz ;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//二维数组
//int main()
//{
//	 
//	int arr[3][4] = { {1,2,3,},{4,5} };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j=0;
//		for (j = 0;j < 4;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//一维数组
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}


////青蛙跳台阶问题
//int Jump(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Jump(n-1)+Jump(n - 2);
//	}
//}
//
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	scanf("%d", &num);
//	ret = Jump(num);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//汉诺塔问题
//void hanoi(int x, char a, char b, char c)
//{
//	if (x == 1)
//	{
//		printf("%c -> %c\n", a, c);
//	}
//	else
//	{
//		hanoi(x - 1, a, c, b);
//		printf("%c -> %c\n", a, c);
//		hanoi(x - 1, b, a, c);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//}


////斐波那契数
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret=Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//strlen递推设计
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "Hello";
//	int len = my_strlen(arr);
//	printf("arr=%d\n", len);
//	return 0;
//}


//循环输出
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num =  0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


////函数累加
//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}


////二分查找法
//int binary_search(int arr[], int key,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid-1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if ( ret == -1)
//	{
//		printf("未找到！");
//	}
//	else
//	{
//		printf("找到了，下标为：%d", ret);
//	}
//
//	return 0;
//}


//求素数
//int is_prime(int x)
//{
//	int j = 0;
//	for(j = 2;j < sqrt(x);j++)
//	{
//		if (x % j == 0)
//			return 0;
//	}
//	if (j >= sqrt(x))
//		return 1;
//	
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 101;i <= 200;i+=2)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


////交换大小（指针）
//void Swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	Swap(&a,&b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}


//int main()
//{
//	char arr[] = "Hello World";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "##########";
//	printf("%s\n", arr2);
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}