///*
//	함수 오버로딩할때 디폴트 매개변수와 입력이 없는 순수한 함수 정의가 있을때
//	입력 없는 함수 호출시 오류 발생
//*/
//#include <iostream>
//using namespace std;
//
//int func(int n = 0) {
//	return n * n;
//}
//
//int func() {
//	return 10;
//}
//
//int main()
//{
//	cout << func(10) << endl;
//	//cout << func() << endl;	// 안됨. 구분못함
//	return 0;
//}