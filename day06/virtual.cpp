///*
//	virtual function : 파생클래스에서 재정의할 것을 약속받은 멤버 함수
//	Base 클래스의 멤버 함수에 virtual 키워드를 사용하여 생성
//	virtual table 만들어지고, dynamic binding으로 동작
//*/
//#include <iostream>
//
//class Base {
//public:
//	virtual void func1() {							// 가상 함수
//		std::cout << "Base::func1()" << std::endl;
//	}
//	virtual void func2() {							// 가상 함수
//		std::cout << "Base::func2()" << std::endl;
//	}
//	void func3() {
//		std::cout << "Base::func3()" << std::endl;
//	}
//};
//
//class Derived : public Base {
//	void func1() override {							// 가상함수를 재정의하는 멤버함수 나타냄
//		std::cout << "Derived::func1()" << std::endl;	
//	}
//	void func3() {
//		std::cout << "Derived::func2()" << std::endl;
//	}
//	void func4() {
//		std::cout << "Derived::func4()" << std::endl;
//	}
//};
//
//int main()
//{
//	Base b;
//	Derived d;
//	Base* bptr = new Derived();	// upcasting
//
//	bptr->func1();				// base 클래스의 func1()은 가상함수로 선언되어 Derived 클래스의 func1()이 호출	
//	bptr->func2();				// base 클래스의 func1()은 가상함수로 선언되었지만 오버라이딩(재정의) 되지 않았음. 부모클래스의 함수가 호출됨
//	bptr->func3();				// 포인터 타입의 호출 함수가 결정됨
//	//bptr->func4();
//
//	delete bptr;
//	bptr = &b;
//	bptr->func1();
//	bptr->func2();
//	bptr->func3();
//
//	return 0
//
//}
//
///* 겍체 포인터의 다형성으로 기초 클래스 타입의 포인터로 파생 클래스 객체 가키리면 접근은 기초 클래스 멤버로 제한
//   이 떄 오버라이딩 된 파생클래스의 멤버를 사용하기 위해서는 기초 클래스의 멤버 함수를 가상함수로 만들면 됨
//   이것은 컴파일 시 포인터형으로 바인딩되지 못하고 런타임에서 포인터가 어떤 객체를 가리키고 있는지에 따라 바인딩 함수 결정*/