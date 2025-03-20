///*
//	static - 클래스 멤버. this 포인터가 없음. 객체들이 공유함
//*/
//#include <iostream>
//
//class StaticTest {
//public:
//	int n;
//	static int static_n;		// static 멤버 변수
//	StaticTest();
//	void print();
//};
//int StaticTest::static_n = 10;	// static 멤버변수 초기화는 클래스 외부에서 해야 함
//StaticTest::StaticTest() {
//	n = 20;
//	//static_n = 10;
//}
//
//void StaticTest::print() {
//	std::cout << "static_n: " << static_n << "  " << "n: " << n << std::endl;
//}
//
//int main()
//{
//	StaticTest obj1, obj2;
//	obj1.print();
//	obj2.print();
//
//	obj2.static_n = 1000;	// StaticTest 타입의 모든 객체들이 이 값을 공유함
//	obj2.n = 50;
//	obj2.print();
//	obj1.print();			// obj1의 static_n도 1000
//	return 0;
//}