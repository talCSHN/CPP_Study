///*
//	���� ������ �����ε�: ��ȯ�� operator[������]()
//*/
//#include <iostream>
//
//class Money {
//private:
//	int money;
//public:
//	Money(int m = 0) : money(m) {
//	}
//	int operator()() {
//		return money;
//	}
//	void operator()(int m) {
//		money += m;
//	}
//	
//};
//
//int main()
//{
//	Money m;
//	printf("money: %d\n", m.operator()());
//	m(1000);
//	printf("money: %d\n", m.operator()());
//	m.operator()(1000);
//	printf("money: %d\n", m.operator()());
//	return 0;
//}