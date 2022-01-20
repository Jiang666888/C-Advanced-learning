#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stddef.h>

#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)

struct  S
{
	char c1;
	int a;
	char c2;
};
int main()
{
	/*printf("%d\n", offsetof(struct S, c1));
	printf("%d\n", offsetof(struct S, a));
	printf("%d\n", offsetof(struct S, c2));*/
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, c2));
	return 0;
}



//#define DEBUG
//
//int main()
//{
//#ifdef DEBUG
//	printf("hello\n");
//#endif
//	return 0;
//}



//#define MALOC(num,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p = MALOC(10, int);
//	return 0;
//}


//#define PRINT(X) printf("the value "#X" is %d\n",X)
//#define CAT(x,y) x##y
//
//int main()
//{
//	/*int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);*/
//	int Class82 = 100;
//	int ret = CAT(Class, 82);
//	printf("%d\n", ret);
//	return 0;
//}



//#define MAX 5
//#define SQUARE(X) ((X)*(X))
//
//int main()
//{
//	int ret = SQUARE(MAX+1);
//	printf("%d\n", ret);
//	return 0;
//}



//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0;i < 10;i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s\n", __FILE__, __LINE__, __DATE__, __TIME__);
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}