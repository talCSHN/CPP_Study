///*
//	구조체 포인터:
//*/
//#include <stdio.h>
//
//typedef struct score {
//	int kor;
//	int eng;
//	int mat;
//} Score;
//
//int main()
//{
//	Score s = { 100, 80, 85 };
//	Score* ps = &s;
//
//	printf("국어 : %d\n", ps->kor);
//	printf("영어 : %d\n", ps->eng);
//	printf("수학 : %d\n", ps->mat);
//	//printf("수학 : %d\n", *(ps.mat));	// 주소에 .(멤버접근연산자) 쓰는건 안됨
//	printf("수학 : %d\n", (*ps).mat);	// 이렇게 해야함
//	return 0;
//}
///*
//	구조체 변수를 통해서 멤버에 접근하는 방법 : .(멤버접근 연산자)
//	구조체 포인터를 통해서 멤버에 접근하는 방법 : ->(arrow 연산자)
//*/