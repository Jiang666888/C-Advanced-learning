#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>

//内存函数
//memset的实现与功能仿制
int main()
{
	char arr[10] = "";
	memset(arr, '#', 10);
	printf("%s\n", arr);
	return 0;
}



//memcmp的实现与功能仿制
//int main()
//{
//	int arr1[]= { 1,2,3,4,5 };
//	int arr2[] = { 1,2,2,1,1 };
//	int ret = memcmp(arr1,arr2,8);
//	printf("%d\n", ret);
//	return 0;
//}



//memmove的实现与功能仿制
//void* my_memmove(void* dest, const void* str, size_t num)
//{
//	assert(dest != NULL);
//	assert(str != NULL);
//	void* ret = dest;
//	while (num--)
//	{
//		if (dest < str)
//		{
//			*(char*)dest = *(char*)str;
//			++(char*)dest;
//			++(char*)str;
//		}
//		else
//		{
//			*((char*)dest + num)= *((char*)str+num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//memmove(arr + 2, arr, 20);
//	my_memmove(arr , arr+2, 20);
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//memcpy的实现与功能仿制
//void* my_memcpy(void* dest, const void* str,size_t num)
//{
//	assert(dest != NULL);
//	assert(str != NULL);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)str;
//		++(char*)dest;
//		++(char*)str;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	//memcpy(arr2, arr1,sizeof(arr1));
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}



//int main()
//{
//	char arr[] = "I Am a Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		else
//		{
//			arr[i] = toupper(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	//char ch = tolower('G');//转小写
//	//char ch = toupper('q');//转大写
//	//putchar(ch);
//	/*char c = 'w';
//	int ret = islower(c);
//	printf("%d\n", ret);*/
//	return 0;
//}






//字符函数
//strerror的实现与功能仿制
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success!");
//	}
//	return 0;
//}



//strtok的实现与功能仿制
//int main()
//{
//	char arr[] = "www@qq.com";
//	char* p = "@.";
//	char buf[1024] = {0};
//	strcpy(buf, arr);
//	printf("%s\n", buf);
//	char* ret = NULL;
//	for (ret = strtok(arr, p);ret != NULL;ret = strtok(NULL, p))
//	{
//		printf("%s\n",ret);
//	}
//	/*char* ret = strtok(arr, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);*/
//	return 0;
//}



//strncmp的实现与功能仿制
//int main()
//{
//	const char* p1 = "abcdef";
//	char* p2 = "abcddd";
//	int ret = strncmp(p1, p2, 5);
//	printf("%d\n", ret);
//	return 0;
// }



//strstr的实现与功能仿制
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert((str1 != NULL) && (str2 != NULL));
//	char* s1 = (char*)str1;
//	char* s2 = (char*)str2;
//	char* cur = (char*)str1;
//	while (str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*cur)
//	{
//		s1 = (char*)cur;
//		s2 = (char*)str2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2=='\0')
//		{
//			return cur;
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* p1 = "bbbcedf";
//	char* p2 = "bbc";
//	//char* ret = strstr(p1,p2);
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("不存在\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}
 


//strncmp的实现与功能仿制
//int main()
//{
//	const char* p1 = "abcdef";
//	char* p2 = "abcnfn";
//	int ret = strncmp(p1, p2, 3);
//	printf("%d\n", ret);
//	return 0;
//}



//strncat的实现与功能仿制
//int main()
//{
//	char arr1[30] = "abc";
//	char arr2[] = "qwer";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}



//strncpy的实现与功能仿制
//int main()
//{
//	char arr1[10] = "abccdef";
//	char arr2[] = "qwer";
//	strncpy(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}



//strcmp的实现与功能仿制
//int my_strcmp(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//	/*if (*str1 < *str2)
//		return -1;
//	else
//		return 1;*/
//}
//int main()
//{
//	char* p1 = "adbc";
//	char* p2 = "acdc";
//	//int ret = strcmp(p1, p2);
//	int ret = my_strcmp(p1, p2);
//	if (ret>0)
//	{
//		printf("p1>p2\n");
//	}
//	else if (ret == 0)
//	{
//		printf("p1=p2\n");
//	}
//	else
//	{
//		printf("p1<p2\n");
//	}
//	return 0;
//}



//strcat的实现与功能仿制
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	//strcat(arr1, arr2);
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//strcpy的实现与功能仿制
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "ght";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//strlen的实现与功能仿制
// 计数器
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//递归
//int my_strlen(const char* str)
//{
//	assert(str);
//	if (*str=='\0')
//		return 0;
//	return 1 + my_strlen(str + 1);
//}
//指针减指针
//int my_strlen(const char* str)
//{
//	assert(str);
//	const char* p = str;
//	while (*p)
//	{
//		p++;
//	}
//	return p - str;
//}
//int main()
//{
//	//int len = strlen("abcdef");
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}