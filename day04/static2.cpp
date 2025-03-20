///*
//
//*/
//#include <iostream>
//
//class AAA {
//private:
//	static int static_a;	// static 멤버 변수
//	int n;
//public:
//	AAA(int n);
//	static void setStatic_a(int a);
//	void print();
//};
//
//int AAA::static_a = 100;
//
//AAA::AAA(int n) {
//	this->n = n;
//}
//
//void AAA::print() {
//	printf("static_a: %d, b: %d\n", static_a, n);
//}
//
//void AAA::setStatic_a(int a) {
//	static_a = a;
//	//n = 0;	// 일반 멤버 접근 허용 x.static 멤버 함수 안에서는 static 멤버 변수만 사용 가능
//}
//
//int main()
//{
//	AAA obj1(10), obj2(20);
//	obj1.print();
//	obj2.print();
//
//	obj1.setStatic_a(50);
//	obj1.print();
//	obj2.print();
//
//	return 0;
//}