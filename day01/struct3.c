///*
//
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct mystruct {
//	char name[20];
//	int age;
//	double height;
//	char* str;
//};
//
//int main()
//{
//	struct mystruct m;
//	strcpy(m.name, "박관호");
//	m.age = 31;
//	m.height = 173.0;
//	m.str = (char*)malloc(sizeof(100));
//	printf("인사말 : ");
//	gets(m.str);
//
//	printf("이름: %s\n", m.name);
//	printf("나이: %d\n", m.age);
//	printf("키: %.1lf\n", m.height);
//	printf("인사말: %s\n", m.str);
//
//	free(m.str);
//
//	return 0;
//}