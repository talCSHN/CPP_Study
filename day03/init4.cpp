///*
//	��� �ʱ�ȭ
//	1.
//	2.
//	3. ��ü�� ����� ������ ���
//*/
//#include <iostream>
//
//class ConstClass {
//private:
//	int m_value;
//	const int m_value2;	// ����� ����� ���ÿ� �ʱ�ȭ�ؾ���
//public:
//	ConstClass(int value, int value2) : m_value2(value2) {	// ��� ��� ������ ��ü �����Ǳ� �� �ݵ�� �ʱ�ȭ �Ǿ���� 
//															// -> ������ ����Ǳ����� �ʱ�ȭ
//		m_value = value;
//	}
//	void showValue() {
//		printf("m_value: %d, m_value2: %d\n", m_value, m_value2);
//	}
//};
//
//class RefClass {
//private:
//	int& ref;	// ���۷����� ��ü�� �����Ǳ� �� �ݵ�� �ʱ�ȭ�� �̷������ ��
//public:
//	RefClass(int& r) : ref(r) {
//
//	}
//	void showValue() {
//		printf("ref: %d\n", ref);
//	}
//};
//
//class Position {
//private:
//	int m_x;
//	int m_y;
//public:
//	Position(int x, int y) {
//		m_x = x;
//		m_y = y;
//	}
//	void getData() {
//		printf("m_x: %d, m_y: %d\n", m_x, m_y);
//	}
//};
//
//class ObjClass {
//private:
//	Position pos;		// ��ü �������
//public:
//	ObjClass(int x, int y) : pos(x, y) {
//		printf("ObjClass constructor\n");
//	}
//	void showValue() {
//		pos.getData();
//	}
//};
//
//int main()
//{
//	ConstClass obj(10, 20);
//	obj.showValue();
//
//	int n = 50;
//	RefClass obj2(n);
//	obj2.showValue();
//
//	std::cout << "=====================" << std::endl;
//	ObjClass o(3, 6);
//	o.showValue();
//	return 0;
//}