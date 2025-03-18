///*
//	상수 레퍼런스 : 상수도 참조 가능
//*/
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n = 10;
//	//int& ref = n;
//	//int& ref = 10;	// 안됨
//	const int& ref = 10;	// 상수 레퍼런스로 선언하면 리터럴도 참조 가능.
//							// 임시 객체를 저장할 수 있는 공간이 생성됨
//
//	cout << "ref: " << ref << endl;
//	return 0;
//}