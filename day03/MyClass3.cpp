//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	//mutable int id; // ����� ���� �����ϵ��� ����
//	int id;
//	char* name;
//	int age;
//public:
//	MyClass() {
//
//	}
//	MyClass(int n, const char* pstr, int n2);
//		
//	
//	~MyClass() {	// �Ҹ��� -> �ڵ� ȣ���. �����Ҵ� ��� ����� ���� �ۼ� ���ʿ�
//		delete[] name;
//	}
//
//	void getData() const;
//};
//
//MyClass::MyClass(int n, const char* pstr, int n2) {	// ���ڿ� ��� : �ּҶ� �����ͺ����� �޾ƾ� ��
//	id = n;
//	name = new char[strlen(pstr) + 1];		// ���� �Ҵ�
//	// name = pstr							// �迭 ���� �� ���� �����ڸ� ����Ͽ� ���� ���� �Ҵ��� �� ����
//	strcpy(name, pstr);
//	//name = pstr;
//	age = n2;
//}
//
//void MyClass::getData() const{				// ��� ����Լ�(��� ������� ���ȭ ��Ŵ)
//											// const void void MyClass::getData() -> return���� ���ȭ
//	cout << "id: " << id << endl << "name: " << name << endl << "age: " << age << endl;
//	//id = 2; mutable ������ ����
//}
//
//int main()
//{
//	
//	MyClass obj(1, "ȣ����", 41);
//	obj.getData();
//
//	return 0;
//}