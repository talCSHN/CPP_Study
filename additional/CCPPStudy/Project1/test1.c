///*
//함수 정의, 함수 호출, 함수 선언
//*/
//#include <stdio.h>
//
//void func();	// 함수 선언
//void func1(char);
//int func2(int);
//int func3();
//
//int main(int arg, char** argv)
//{
//	char ch = 'a';
//	int num = 10;
//	func();
//	func1(ch);	// 함수 호출
//	int res = func2(num);	// func2(num)의 결과값인 임시객체 -> res에 저장
//	res += 1;
//	int res1 = func3();
//	res1 += 100;
//	return 0;
//}
//
//void func()	// 함수 정의
//{
//	printf("hello\n");
//}
//
//void func1(char arg)	// 함수 호출 시 넣은 인자를 arg에 복사(Call by Value)
//{
//	printf("arg: %c\n", arg);
//}
//
//int func2(int n)
//{
//
//	return n;
//}
//
//int func3()
//{
//
//	return 100;
//}