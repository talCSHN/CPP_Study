/*
	step 1. �̸��� ��ȭ��ȣ�� �����Ҵ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Human {
private:
	char* pname;
	int age;
	char* ptel;
public:
	Human(const char* name, int num, const char* phone) {
		pname = new char[strlen(name) + 1];
		strcpy(pname, name);
		age = num;
		ptel = new char[strlen(phone) + 1];
		strcpy(ptel, phone);
	}
	~Human() {
		delete[] pname;
		delete[] ptel;
	}
	void getData() {
		std::cout << "�̸�: " << pname << std::endl << "����: " << age << std::endl << "��ȭ��ȣ: " << ptel << std::endl;
	}
};

int main()
{
	Human h("ȣ����", 41, "010-1234-5678");
	h.getData();
	return 0;
}