//#include <iostream>
//
//class MyClass {
//private:
//	int m_a, m_b;
//	//const char* m_name;
//public:
//	MyClass(int num = 0, int num2 = 0 /*const char* str = nullptr*/) : m_a(num), m_b(num2)/*, m_name(str)*/ {
//		//m_a = num;
//		//m_b = num2;
//		////m_name = new char[strlen(str) + 1];
//		//strcpy(m_name, str);
//	}
//	void showMyClass() {
//		std::cout << m_a << ", " << m_b << ", " << /*m_name <<*/ std::endl;
//	}
//};
//
//int main()
//{
//	//MyClass obj{ 1, 2, "홍길동" };
//	//obj.showMyClass();
//
//	//MyClass obj2;	// default 생성자 선언 없이 호출하려면 위의 생성자에서 초기값 줘야함
//	//obj2 = obj;		// num = 10; 디폴트 대입 연산자
//	//				// obj 객체에 있는 멤버변수들을 복사해서 obj2 생성
//	//				// 연산자 오버로딩 기능이 있기때문에 가능
//	//obj2.showMyClass();
//
//	MyClass obj{ 10, 20 };
//	MyClass obj2{ 30, 40 };
//	MyClass obj3 = obj + obj2;	// 이게 되려면 +연산자에 대한 오버로딩이 필요함
//
//	return 0;
//}