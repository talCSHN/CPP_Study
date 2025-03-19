#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class MyClass {
private:
	int id;
	//char name[20];
	char* name;
	int age;
public:
	MyClass() {

	}
	MyClass(int n, const char* pstr, int n2) {	// 문자열 상수 : 주소
		id = n;
		name = new char[strlen(pstr) + 1];
		strcpy(name, pstr);
		age = n2;
		
	}
	~MyClass() {
		delete name;
	}

	//void setData(int num, const char* str, int num2) {
	//	id = num;
	//	// name = str; // 안 됨 -> name은 배열의 첫번째 주소, str은 값이기 때문에
	//	strcpy(name, str);
	//	age = num2;
	//}

	void getData() {
		cout << "id: " << id << endl << "name: " << name << endl << "age: " << age << endl;
	}
};

int main()
{
	//MyClass obj2;
	// obj.setData(1, "호날두", 41);
	// obj.getData();
	MyClass obj2(1, "호날두", 41);
	obj2.getData();

	return 0;
}