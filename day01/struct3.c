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
//	strcpy(m.name, "�ڰ�ȣ");
//	m.age = 31;
//	m.height = 173.0;
//	m.str = (char*)malloc(sizeof(100));
//	printf("�λ縻 : ");
//	gets(m.str);
//
//	printf("�̸�: %s\n", m.name);
//	printf("����: %d\n", m.age);
//	printf("Ű: %.1lf\n", m.height);
//	printf("�λ縻: %s\n", m.str);
//
//	free(m.str);
//
//	return 0;
//}