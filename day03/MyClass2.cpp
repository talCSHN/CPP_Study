//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int id;
//	char name[20];
//	int age;
//public:
//	MyClass() {
//
//	}
//	MyClass(int n, const char *pstr, int n2) {	// ���ڿ� ��� : �ּ�
//		id = n;
//		strcpy(name, pstr);
//		age = n2;
//	}
//
//	void setData(int num, const char* str, int num2) {
//		id = num;
//		// name = str; // �� �� -> name�� �迭�� ù��° �ּ�, str�� ���̱� ������
//		strcpy(name, str);
//		age = num2;
//	}
//
//	void getData() {
//		cout << "id: " << id << endl << "name: " << name << endl << "age: " << age << endl;
//	}
//};
//
//int main()
//{
//	MyClass obj;
//	obj.setData(1, "�ڰ�ȣ", 41);
//	obj.getData();
//	MyClass obj2(1, "�޽�", 39);
//	obj2.getData();
//	return 0;
//}