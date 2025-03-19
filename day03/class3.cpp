///*
//	생성자
//	생성자 호출로 객체 만들어짐
//	객체 생성시 구조에 맞는 생성자 없으면 객체 생성되지 않음
//	생성자 -> 초기화 기능
//	생성자 -> 오버로딩 가능
//	생성자를 명시적으로 작성하면 디폴트 생성자는 제공 x
//*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int m_num1;
//	int m_num2;
//public:
//	MyClass() {	// default 생성자
//		m_num1 = 10;
//		m_num2 = 20;
//	}
//	MyClass(int n1) {
//		m_num1 = n1;
//		m_num2 = n1;
//	}
//	MyClass(int num1, int num2) {	// 생성자 오버로딩
//		m_num1 = num1;
//		m_num2 = num2;
//	}
//	~MyClass() {	// 소멸자
//
//	}
//	void printData() {
//		cout << "나는 MyClass의 인스턴스 입니다." << endl;
//		cout << "m_num1: " << m_num1 << endl << "m_num2: " << m_num2 << endl;
//	}
//};
//
//int main()
//{
//	MyClass obj;
//	MyClass obj2(50);
//	MyClass obj3(100, 200);
//	obj.printData();
//	obj2.printData();
//	obj3.printData();
//	return 0;
//}