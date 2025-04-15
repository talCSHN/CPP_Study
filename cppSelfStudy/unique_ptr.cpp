///*
//	스마트 포인터 unique_ptr
//	객체의 생명 주기를 객체가 관리
//	개발자의 메모리 관리 부담을 줄여줌
//	unique_ptr - 소유권을 독점적으로 관리하는 스마트 포인터(auto_ptr 대체)
//*/
//#include <iostream>
//
//using namespace std;
//
//class MyClass {
//public:
//	MyClass() {
//		cout << "MyClass Constructor call" << endl;
//	}
//	~MyClass() {
//		cout << "MyClass Destructor call" << endl;
//	}
//};
//
//int main()
//{
//
//	unique_ptr<MyClass> ptr(new MyClass());
//	unique_ptr<MyClass> ptr2(new MyClass());
//	//unique_ptr<MyClass> ptr2 = move(ptr);
//	cout << ptr << endl << ptr2 << endl;
//
//	return 0;
//}