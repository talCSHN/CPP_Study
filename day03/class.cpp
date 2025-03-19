///*
//	class 구성 요소
//	1. 접근제어 지시자(private, public, protected)
//	2. 멤버 변수 - 속성, private 영역
//	3. 멤버 함수(메서드) - 기능, public 영역
//*/
//#include <iostream>
//using namespace std;
//
//class A {
//public:
//	int m_num;		// 멤버 변수
//
//	void set(int num) {
//		m_num = num;
//	}
//
//	void print() {	// 멤버 함수
//		cout << "나는 A클래스의 인스턴스입니다 " << "num : " << m_num << endl;
//	}
//};
//
//int main()
//{
//	//A obj();	// 생성자 호출. A 클래스의 객체 obj == obj는 클래스 A의 인스턴스
//	A obj;
//	obj.print();
//	obj.set(10);
//	obj.print();
//	return 0;
//}