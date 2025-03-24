///*
//	Inheritance(상속)
//	private, public, protected
//	is a(무엇은 무엇이다.), has a(소유) 관계 성립해야 함
//*/
//#include <iostream>
//#include <string.h>
//
//class Human {						// 부모 클래스, 기초 클래스, 슈퍼 클래스, 베이스 클래스
//private:
//	char name[20];
//	int age;
//public:
//	Human(const char*, int);
//	void getData();
//};
//
//class Student : public Human {		// 자식 클래스, 파생 클래스, 서브 클래스, 드라이버드 클래스
//private:
//	int studentId;
//public:
//	Student(const char*, int, int);
//	void showStudent();
//};
//
//Human::Human(const char* aname, int aage) {
//	strcpy_s(name, aname);
//	age = aage;
//}
//void Human::getData() {
//	std::cout << "이름: " << name << ", " << "나이: " << age << std::endl;
//}
//
//// 상속받은 멤버들은 상속한 부모클래스의 생성자에서 초기화
//Student::Student(const char* aname, int aage, int astudentId) : Human(aname, aage) {			// 콜론 초기화로 부모 생성자를 불러와야함
//	/*strcpy(name, aname);
//	age = aage;*/
//	studentId = astudentId;
//}
//void Student::showStudent() {
//	//std::cout << "이름: " << name << std::endl;	안 됨
//	std::cout << "학번: " << studentId << std::endl;
//}
//
//int main()
//{
//	Human h("호날두", 31);
//	h.getData();
//
//	Student h2{ "메시", 30, 202503 };
//	h2.getData();
//	h2.showStudent();
//	return 0;
//}