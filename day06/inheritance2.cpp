///*
//	protected 접근제어는 상속 받은 자식이 접근 가능
//*/
//#include <iostream>
//
//class Human {
//protected:
//	char name[20];
//	int age;
//public:
//	Human(const char* aname, int aage) {
//		strcpy_s(name, aname);
//		age = aage;
//	}
//	void getData() {
//		std::cout << "이름: " << name << ", " << "나이: " << age << std::endl;
//	}
//};
//
//class Student : public Human {
//private:
//	int studentId;
//public:
//	Student(const char* aname, int aage, int astudentId) : Human(aname, aage) {
//		studentId = astudentId;
//	}
//	void showStudent() {
//		std::cout << "이름: " << name << ", " << "나이: " << age << ", " << "학번: " << studentId << std::endl;
//
//	}
//};
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