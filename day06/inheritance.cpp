///*
//	Inheritance(���)
//	private, public, protected
//	is a(������ �����̴�.), has a(����) ���� �����ؾ� ��
//*/
//#include <iostream>
//#include <string.h>
//
//class Human {						// �θ� Ŭ����, ���� Ŭ����, ���� Ŭ����, ���̽� Ŭ����
//private:
//	char name[20];
//	int age;
//public:
//	Human(const char*, int);
//	void getData();
//};
//
//class Student : public Human {		// �ڽ� Ŭ����, �Ļ� Ŭ����, ���� Ŭ����, ����̹��� Ŭ����
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
//	std::cout << "�̸�: " << name << ", " << "����: " << age << std::endl;
//}
//
//// ��ӹ��� ������� ����� �θ�Ŭ������ �����ڿ��� �ʱ�ȭ
//Student::Student(const char* aname, int aage, int astudentId) : Human(aname, aage) {			// �ݷ� �ʱ�ȭ�� �θ� �����ڸ� �ҷ��;���
//	/*strcpy(name, aname);
//	age = aage;*/
//	studentId = astudentId;
//}
//void Student::showStudent() {
//	//std::cout << "�̸�: " << name << std::endl;	�� ��
//	std::cout << "�й�: " << studentId << std::endl;
//}
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