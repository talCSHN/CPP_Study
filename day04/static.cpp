///*
//	static - Ŭ���� ���. this �����Ͱ� ����. ��ü���� ������
//*/
//#include <iostream>
//
//class StaticTest {
//public:
//	int n;
//	static int static_n;		// static ��� ����
//	StaticTest();
//	void print();
//};
//int StaticTest::static_n = 10;	// static ������� �ʱ�ȭ�� Ŭ���� �ܺο��� �ؾ� ��
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
//	obj2.static_n = 1000;	// StaticTest Ÿ���� ��� ��ü���� �� ���� ������
//	obj2.n = 50;
//	obj2.print();
//	obj1.print();			// obj1�� static_n�� 1000
//	return 0;
//}