///*
//	�̵� ������(T&&)
//	r-value reference�� �Ķ���ͷ� ���� �̵� ������
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//	char name[10];
//	int age;
//public:
//	// �Է� 2�� �޴� ������
//	Human(const char* name, int age) {
//		printf("Constructor(2 parameters) call\n");
//		strcpy(this->name, name);
//		this->age = age;
//	}
//	// ���� ������
//	Human(const Human& other) {
//		printf("Copy Constructor call\n");
//		strcpy(this->name, other.name);
//		this->age = other.age;
//	}
//	// �̵� ������
//	Human(Human&& other) noexcept{		// ���� ��ü�� ���� x. ���� ��ü�� ������ �̵������ڷ� ���޵�. ����������� �ӵ��� ����
//										// �� �̵� �� ���ܹ߻� �����ϱ� ���� noexcept ����ؾ� ��
//		printf("Move Constructor call\n");
//		strcpy(this->name, other.name);
//		this->age = other.age;
//		
//		
//		other.age = 0; // �ӽð�ü�� 0 ����
//	}
//	void showHuman() {
//		printf("name: %s, age: %d\n\n", this->name, this->age);
//	}
//};
//
//int main()
//{
//	Human h("ȣ����", 31);
//	h.showHuman();
//
//	Human h1(h);
//	h1.showHuman();
//
//	Human h2(std::move(h));		// �̵� ������ ȣ��
//	h2.showHuman();
//	h.showHuman();
//	return 0;
//}