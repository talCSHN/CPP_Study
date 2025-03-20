///*
//	���� ����(deep copy) ���������
//	�����Ҵ� ���� ��� �����ϴ� ��ü�� ���� �Ҵ� �޾Ƽ� ������ �����Ͽ� ���� �Ǿ�� ��
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
//		this->name = new char[strlen(other.name) + 1];		// ���� ����. �����Ҵ� �����ָ� ���� ����. 
//															// ���� ����� ������ ��ü�� ����Ű�� ���� heap������ �޸𸮸� ����Ŵ
//															// ���� �����ϸ� ������ ��ü ����� �� 
//															// ������ ��ü�� heap���� �޸� ������� ���� ���� �� ����
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
//	Person p("�ڰ�ȣ", 31);
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
//	����Ʈ�� �ڵ� �����޴� ������ : ����Ʈ ������, ���� ������, �Ҹ���
//*/