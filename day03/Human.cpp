/*
	step 1. 이름과 전화번호는 동적할당
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
		std::cout << "이름: " << pname << std::endl << "나이: " << age << std::endl << "전화번호: " << ptel << std::endl;
	}
};

int main()
{
	Human h("호날두", 41, "010-1234-5678");
	h.getData();
	return 0;
}