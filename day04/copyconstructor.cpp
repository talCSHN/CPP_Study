///*
//	copy constructor(���������)
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	char m_name[20];
//	int m_age;
//public:
//	Person(const char* pstr, int num) {
//		printf("Constructor call\n");
//		strcpy(m_name, pstr);
//		m_age = num;
//	}
//	void printPerson() {
//		printf("name: %s, age: %d\n", m_name, m_age);
//	}
//};
//
//int main()
//{
//	Person p("ȣ����", 30);
//	p.printPerson();
//
//	Person p2(p);			// ��������� ȣ���
//	p2.printPerson();
//
//	Person p3 = p;
//	p3.printPerson();
//	return 0;
//}