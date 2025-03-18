///*
//	다형성
//	overloading(함수의 다중정의) : 함수 이름은 같은데 매개변수의 타입과 개수가 다르면 다른 함수
//	overriding(함수의 재정의) -> 상속
//*/
//#include <iostream>
//using namespace std;
//
//int func() {
//	return 10;
//}
//
//int func(char c) {
//	return c;
//}
//
//int func(int n) {
//	return 10 + n;
//}
//
//int func(int n1, int n2) {
//	return n1 + n2;
//}
//
////char func(char c) {
////	return c;
////}
//int main()
//{
//	cout << func() << endl;
//	cout << func('a') << endl;	// int 반환값 -> 유니코드값 출력됨
//	cout << func(10) << endl;
//	cout << func(10, 20) << endl;
//	return 0;
//}