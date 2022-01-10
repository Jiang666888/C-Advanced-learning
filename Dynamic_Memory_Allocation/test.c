#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

struct S
{
	int n;
	int arr[];
};
int main()
{
	struct S* ps=(struct S*)malloc(sizeof(struct S)+5*sizeof(int));
	ps->n = 100;
	int i = 0;
	for (i = 0;i < 5;i++)
	{
		ps->arr[i] = i;
	}
	struct S* ptr = realloc(ps, 44);
	if (ptr != NULL)
	{
		ps = ptr;
	}
	for (i = 5;i < 10;i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0;i < 10;i++)
	{
		printf("%d ", ps->arr[i]);
	}
	free(ps);
	ps = NULL;
	return 0;
}



//int main()
//{
//	char str[] = "hello!";
//	printf(str);
//	//int* p = (int *)malloc(20);
//	//int* p = (int *)malloc(INT_MAX);//不初始化
//	//int* p = (int*)calloc(10, sizeof(int));//初始化为0
//	/*if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0;i < 5;i++)
//		{
//			*(p + i) = i;
//		}
//		
//	}
//	int* p2 = realloc(p, 40);
//	int i = 0;
//	if (p2 != NULL)
//		p = p2;
//	for (i = 5;i < 10;i++)
//	{
//		*(p2 + i) = i;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *(p2 + i));
//	}
//	free(p2);
//	p2 = NULL;*/
//	return 0;
//}