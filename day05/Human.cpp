///*
//	step3
//	char ������ name, int Ÿ�� age, ��� �޼��� showHuman()�� ������ Human Ŭ����
//	name �����Ҵ�, age 30, �̸� ȫ�� man ��ü ����
//	man ��ü �����Ͽ� copyman ��ü ����
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
//		//this->name = other.name; // ���� ����
//		this->age = other.age;
//	}
//	~Human() {
//		printf("Destructor call\n");
//		delete[] name;
//	}
//	void showHuman() {
//		printf("�̸� : %s, ����: %d\n\n", name, age);
//	}
//};
//
//int main()
//{
//	Human man("ȫ��", 30);
//	man.showHuman();
//
//	Human copyman = man;
//	copyman.showHuman();
//
//	Human copyman1(man);
//	copyman1.showHuman();
//
//	//Human xman;
//	//xman = copyman; // �� ��/
//	return 0;
//}