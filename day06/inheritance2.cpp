///*
//	protected ��������� ��� ���� �ڽ��� ���� ����
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
//		std::cout << "�̸�: " << name << ", " << "����: " << age << std::endl;
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
//		std::cout << "�̸�: " << name << ", " << "����: " << age << ", " << "�й�: " << studentId << std::endl;
//
//	}
//};
//
//int main()
//{
//	Human h("ȣ����", 31);
//	h.getData();
//	
//	Student h2{ "�޽�", 30, 202503 };
//	h2.getData();
//	h2.showStudent();
//	return 0;
//}