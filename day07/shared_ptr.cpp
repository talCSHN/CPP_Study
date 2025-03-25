///*
//	shared_ptr
//	make_shared : 객체와 참조 카운트를 하나의 메모리 블럭에 같이 할당. shared_ptr을 생성하는 함수
//	shared_ptr는 참조 카운트를 통해 객체의 소유권 공유
//	여러개의 shared_ptr이 객체를 참조할 수 있으며 레퍼런스 카운트가 0이 되면 메모리 자동 해제
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
//		std::cout << "Siuuuuu shared_ptr" << std::endl;
//	}
//};
//
//int main()
//{
//	std::shared_ptr<MyClass> ptr = std::make_shared<MyClass>();
//	std::shared_ptr<MyClass> ptr2 = ptr;
//	printf("ptr과 ptr2는 동일한 객체를 가리킴(공유)\n");
//
//	ptr2->func();
//	return 0;
//}