///*
//
//*/
//#include <iostream>
//
//class AAA {
//private:
//	static int static_a;	// static ��� ����
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
//	//n = 0;	// �Ϲ� ��� ���� ��� x.static ��� �Լ� �ȿ����� static ��� ������ ��� ����
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