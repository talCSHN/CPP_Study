///*
//	struct(구조체) - 사용자 정의 자료형
//	기존 자료형을 묶어서 만든 복합 자료형(타입)
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h> // strcpy 쓰려면 추가해줘야함
//
//struct Human {			// 구조체 선언 struct 구조체명
//	char name[100];		// 멤버 변수
//	int age;			// 멤버 변수
//};
//
//int main()
//{
//	/* . : 멤버접근 연산자 */
//	struct Human h;		// Human 구조체 변수 h 선언
//	h.age = 31;			// h 객체의 멤버 age에 31 저장
//	//h.name = "박관호";	// 주소값에는 리터럴값을 할당하지 못함
//	strcpy(h.name, "박관호"); // 문자열 복사
//	printf("이름은 %s, 나이는 %d", h.name, h.age);
//
//	return 0;
//}