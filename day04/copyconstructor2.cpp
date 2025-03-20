///*
//	복사생성자
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	char name[20];
//	int age;
//public:
//	Person(const char* name, int age) {
//		printf("Constructor call\n");
//		strcpy(this->name, name);
//		this->age = age;
//	}
//	//Person(Person other) {			// 이렇게 하면 무한루프 돌아감
//	Person(const Person& other) {				// 참조자를 써야함
//		printf("Copy Constructor call\n");
//		this->age = other.age;
//		strncpy(this->name, other.name, strlen(other.name) + 1);
//	}
//	void showPerson() {
//		printf("name: %s, age: %d\n\n", this->name, this->age);
//	}
//};
//
//int main()
//{
//	Person p("호날두", 31);
//	p.showPerson();
//
//	Person p2(p);
//	p2.showPerson();
//
//	Person p3 = p;
//	p3.showPerson();
//	return 0;
//}