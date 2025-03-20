///*
//	copy constructor(복사생성자)
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
//	Person p("호날두", 30);
//	p.printPerson();
//
//	Person p2(p);			// 복사생성자 호출됨
//	p2.printPerson();
//
//	Person p3 = p;
//	p3.printPerson();
//	return 0;
//}