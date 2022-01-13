#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (!pf)
	{
		perror("error");
		return;
	}
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);
	}
	printf("\n");
	if (ferror(pf))
	{
		printf("error\n");
	}
	else if (feof(pf))
	{
		printf("end of file\n");
	}
	fclose(pf);
	pf = NULL;
	return 0;
}



//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("error");
//		return;
//	}
//	//fseek(pf, 2, SEEK_CUR);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	/*int pos = ftell(pf);
//	printf("%d\n", pos);*/
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100,3.14f,"hello"};
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//格式化数据转换字符串
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n",buf);
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}
//int main()
//{
//	struct S s = { 0 };
//	//FILE* pf=fopen("test.txt", "w");
//	FILE* pf=fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//fprintf(pf,"%d %f %s", s.n, s.score, s.arr);
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score,s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	char buf[2014] = { 0 };
//	gets(buf);
//	puts(buf);
//}



//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	fputs("hello", pf);
//	fputs("world", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//	fgets(buf, 1024, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch,stdout);
//	return 0;
//}



//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	printf("%c\n", fgetc(pf));
//	printf("%c\n", fgetc(pf));
//	printf("%c\n", fgetc(pf));
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	FILE* pf = fopen("test.txt","w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}