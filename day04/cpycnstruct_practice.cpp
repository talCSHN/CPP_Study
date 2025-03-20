///*
//	깊은 복사(deep copy) 복사생성자
//	동적할당 받은 경우 복사하는 객체도 동적 할당 받아서 별개로 복사하여 저장 되어야 함
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	char* name;
//	int age;
//public:
//	Person(const char* name, int age) {
//		this->name = new char[strlen(name) + 1];
//		strcpy(this->name, name);
//		this->age = age;
//	}
//	Person(const Person& other) {
//		printf("Copy Constructor call\n");
//		this->name = new char[strlen(other.name) + 1];		// 깊은 복사. 동적할당 안해주면 얕은 복사. 
//															// 얕은 복사는 복사한 객체가 가리키는 같은 heap영역의 메모리를 가리킴
//															// 얕은 복사하면 복사한 객체 사라질 때 
//															// 복사한 객체의 heap영역 메모리 사라져서 문제 생길 수 있음
//		strcpy(this->name, other.name);
//		this->age = other.age;
//	}
//	~Person() {
//		delete[] this->name;
//	}
//	void showPerson() {
//		printf("name: %s, age: %d\n\n", this->name, this->age);
//	}
//};
//
//int main()
//{
//	Person p("박관호", 31);
//	p.showPerson();
//
//	Person p2(p);
//	p2.showPerson();
//
//	Person p3 = p;
//	p3.showPerson();
//	return 0;
//}
///*
//	디폴트로 자동 제공받는 생성자 : 디폴트 생성자, 복사 생성자, 소멸자
//*/