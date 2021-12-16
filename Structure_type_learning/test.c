#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stddef.h>
#include <string.h>

#pragma pack(8)//设置对齐数
#pragma pack()//取消设置对齐数

struct s
{
	char name[20];
	int age;
};
struct T
{
	char id[20];
	struct s sz;
};

void Init(struct s* p)
{
	strcpy(p->name, "www");
	p -> age = 10;
}
void Print(struct s* s2)
{
	printf("%s\n", s2->name);
	printf("%d\n", s2->age);
}
int main()
{
	struct s s1;
	Init(&s1);
	Print(&s1);
	/*struct T t1 = {"nihao",{"hello",12}};
	printf("%d\n", offsetof(struct s, name));
	printf("%d\n", offsetof(struct s, age));*/
	return 0;
}