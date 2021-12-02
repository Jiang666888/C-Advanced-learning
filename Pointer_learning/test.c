#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp + 3);
	return 0;
}


//冒泡思想实现qsort
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0;i < width;i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		*buf1++;
//		*buf2++;
//	}
//}
//void buble_sort(void* base,int sz,int width,int (*cmp)(void* e1,void* e2))
//{
//	int i = 0;
//	for (i = 0;i < sz-1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz-1-i;j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//		}
//	}
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	buble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//void test2()
//{
//	struct Stu s[3] = { {"zhangsan",21},{"wangwu",23},{"lisi",19} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	buble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", s[i].age);
//	}
//	printf("\n");
//}
//int main()
//{
//	test1();
//	test2();
//}



//排序
//int cmp_int(const void* e1,const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void test2()
//{
//	struct Stu s[3] = { {"zhangsan",21},{"wangwu",23},{"lisi",19} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	int j = 0;
//	for (j = 0;j < sz;j++)
//	{
//		printf("%d ", s[j].age);
//		//printf("%s ", s[j].name);
//	}
//	printf("\n");
//}
//
//int cmp_float(const void* e1, const void* e2)
//{
//	if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else
//		return -1;
//}
//void test3()
//{
//	float f[] = { 5.0,4.0,3.0,2.0,1.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int n = 0;
//	for (n = 0;n < sz;n++)
//	{
//		printf("%f ", f[n]);
//	}
//	printf("\n");
//}
//int main()
//{
//	test1();
//	test2();
//	test3();
//	return 0;
//}



//冒泡排序
//void bulle_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz-1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz -1-i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bulle_sort(arr, sz);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


// 回调函数
//void print(char* str)
//{
//	printf("hello:%s\n",str);
//}
//void test(void (*pf)(char*))
//{
//	pf("nihao");
//}
//int main()
//{
//	test(print);
//	return 0;
//}



//转移表（计算器）
//void menu()
//{
//	printf("***********************\n");
//	printf("**** 1.Add  2.Sub  ****\n");
//	printf("**** 3.Mul  4.Div  ****\n");
//	printf("**** 5.Xor  0.exit ****\n");
//	printf("***********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
////int main()
////{
////	int input = 0;
////	int x = 0, y = 0;
////	int (*pArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
////	do
////	{
////		menu();
////		printf("请判断计算法则：");
////		scanf("%d", &input);
////		if (input >= 1 && input <= 5)
////		{
////			printf("请输入操作数：");
////			scanf("%d %d", &x, &y);
////			int ret = pArr[input](x,y);
////			printf("%d\n", ret);
////		}
////		else if (input == 0)
////		{
////			printf("退出\n");
////			break;
////		}
////		else
////		{
////			printf("请重新输入\n");
////		}
////	} while (input);
////	return 0;
////}
//void Calc(int (*pf)(int, int))
//{
//	int x = 0, y = 0;
//	printf("请输入操作数：");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请判断计算法则：");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				Calc(Add);
//				break;
//			case 2:
//				Calc(Sub);
//				break;
//			case 3:
//				Calc(Mul);
//				break;
//			case 4:
//				Calc(Div);
//				break;
//			case 5:
//				Calc(Xor);
//				break;
//			case 0:
//				printf("退出\n");
//				break;
//			default:
//				printf("请重新输入\n");
//				break;
//		}
//	} while(input);
//	return 0;
//}



//函数指针数组
//char* my_strcpy(char* dest, const char* src);
//int main()
//{
//	char* (*pf)(char*, const char*) = my_strcpy;
//	char* (*pfArr[4])(char*, const char*);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*p[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d ", p[i](2,3));
//	}
//	return 0;
//}



//函数指针
//void Print(char* str)
//{
//	printf("%s\n",str);
//}
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello");
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*p)(int, int) = Add;
//	printf("%d\n", (*p)(a, b));
//	return 0;
//}


//二维数组传参
//void print(int (*p)[5],int x,int y)
//{
//	int i = 0;
//	for (i = 0;i < x;i++)
//	{
//		int j = 0;
//		for (j = 0;j < y;j++)
//		{
//			//printf("%d ",p[i][j]);
//			printf("%d ", *(p[i] + j));
//			//printf("%d ", (*(p+i))[j]);
//			//printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//	return 0;
//}


//指针打印
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *(*p+i));
//	}
//	/*for (i = 0;i < 10;i++)
//	{
//		printf("%d ", (*p)[i]);
//	} */
//	return 0;
//}



//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	const char* p = "abcdef";
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}