///*
//	shared_ptr
//	make_shared : 객체와 참조 카운트를 하나의 메모리 블럭에 같이 할당. shared_ptr을 생성하는 함수
//	shared_ptr는 참조 카운트를 통해 객체의 소유권 공유
//	여러개의 shared_ptr이 객체를 참조할 수 있으며 레퍼런스 카운트가 0이 되면 메모리 자동 해제
//*/
//#include <iostream>
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
//	void func() {
//		cout << "Siuuuuu shared_ptr" << endl;
//	}
//
//};
//
//int main()
//{
//	shared_ptr<MyClass> ptr = make_shared<MyClass>();
//	shared_ptr<MyClass> ptr2 = ptr;
//	cout << ptr << endl << ptr2 << endl;
//
//	return 0;
//}
//
