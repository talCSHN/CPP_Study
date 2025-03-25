///*
//	스마트 포인터 unique_ptr
//	객체의 생명 주기를 객체가 관리
//	개발자의 메모리 관리 부담을 줄여줌
//	unique_ptr - 소유권을 독점적으로 관리하는 스마트 포인터(auto_ptr 대체)
//*/
//#include <iostream>
//
//class MyClass {
//public:
//	MyClass() {
//		std::cout << "MyClass Constructor call" << std::endl;
//	}
//	~MyClass() {
//		std::cout << "MyClass Destructor call" << std::endl;
//	}
//};
//
//int main()
//{
//	std::unique_ptr<MyClass> ptr(new MyClass{});
//	std::unique_ptr<MyClass> ptr2 = move(ptr);		// 소유권 이전
//
//	return 0;
//}