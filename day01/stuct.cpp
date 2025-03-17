/*
	struct(구조체) - 사용자 정의 자료형
	기존 자료형을 묶어서 만든 복합 자료형
*/
#include <stdio.h>

struct Human {			// 구조체 선언 struct 구조체명
	char name[100];		// 멤버 변수
	int age;			// 멤버 변수
};

int main()
{
	struct Human h;		// Human 구조체의 변수 h 선언
	return 0;
}