#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

typedef struct Stu
{
	char name[20];
	int age;
	char tele[12];
	char sex[5];
}Stu;
void Print1(Stu s)
{
	printf("name=%s\n", s.name);
	printf("age=%d\n", s.age);
	printf("tele=%s\n", s.tele);
	printf("sex=%s\n", s.sex);
}
void Print2(Stu* s)
{
	printf("name=%s\n", s->name);
	printf("age=%d\n", s->age);
	printf("tele=%s\n", s->tele);
	printf("sex=%s\n", s->sex);
}
int main()
{
	Stu s = { "ÕÅÈý",20,"123456789012","ÄÐ" };
	Print1(s);
	Print2(&s);
	return 0;
}



//struct S
//{
//	int a;
//	char c;
//	char arr[10];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "Hello World!";
//	struct T t = { "hehe",{100,'w',"hello",3.14},arr};
//	printf("%s\n", t.ch);
//	return 0;
//}



//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	struct Stu s1;
//	Stu s2;
//	return 0;
//} 