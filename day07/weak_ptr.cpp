///*
//	weak_ptr : 레퍼런스 카운트에 영향을 주지않는 스마트 포인터
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
//	void func() {
//		std::cout << "Siuuuuuu weak_ptr" << std::endl;
//	}
//};
//
//int main()
//{
//	std::shared_ptr<MyClass> ptr = std::make_shared<MyClass>();		// C++14 이후부터 지원
//	std::weak_ptr<MyClass> weakPtr = ptr;
//
//	// weak_ptr은 순환참조를 방지
//	std::shared_ptr<MyClass> ptr2 = weakPtr.lock();		// weak_ptr에서 shared_ptr로 변환
//	if (ptr2) {
//		std::cout << "weak_ptr로 변환한 shared_ptr 사용 가능" << std::endl;
//	}
//
//	return 0;
//}