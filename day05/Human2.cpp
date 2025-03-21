///*
//	step4
//	char 포인터 name, int 타입 age, 출력 메서드 showHuman()을 가지는 Human 클래스
//	name 동적할당, age 30, 이름 홍명보 man 객체 생성
//	man 객체 복사하여 copyman 객체 생성
//	xman = copyman이 실행되도록
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//	char* name;
//	int age;
//public:
//	Human(const char* name = "default", int age = 0) {
//		printf("Constructor call\n");
//		this->name = new char[strlen(name) + 1];
//		strcpy(this->name, name);
//		this->age = age;
//	}
//	Human(const Human& other) {
//		printf("Copy Constructor call\n");
//		this->name = new char[strlen(other.name) + 1];
//		strcpy(this->name, other.name);
//		//this->name = other.name; // 얕은 복사
//		this->age = other.age;
//	}
//	~Human() {
//		printf("Destructor call\n");
//		delete[] name;
//	}
//	void showHuman() {
//		printf("이름 : %s, 나이: %d\n\n", name, age);
//	}
//	const Human& operator=(const Human& other);
//};
//const Human& Human::operator=(const Human& other) {
//	if (this != &other) {
//		delete[] name;
//		printf("Operator Overloading\n");
//		this->name = new char[strlen(other.name) + 1];
//		strcpy(this->name, other.name);
//		this->age = other.age;
//	}
//	return *this;
//}
//
//int main()
//{
//	Human man("홍명보", 30);
//	man.showHuman();
//
//	Human copyman = man;
//	copyman.showHuman();
//
//	Human copyman1(man);
//	copyman1.showHuman();
//
//	//Human xman;
//	//xman = copyman; // 안 됨. 얕은 대입 복사임. 대입연산자 =이 실행됨
//	//Human xman = copyman;	// 복사 생성자 호출할때는 바로 초기화를 시켜줘야함.
//	Human xman;
//	xman = copyman;	// 깊은 복사를 할 수 있는 operator=을 만들어줘야함
//	xman.showHuman();
//	return 0;
//}