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
//	
//	void setData(int num, const char* str, int num2) {
//		id = num;
//		// name = str; // 안 됨 -> name은 배열의 첫번째 주소, str은 값이기 때문에
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
//	obj.setData(1, "호날두", 41);
//	obj.getData();
//	return 0;
//}