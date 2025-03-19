//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	//mutable int id; // 상수도 변경 가능하도록 설정
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
//	~MyClass() {	// 소멸자 -> 자동 호출됨. 동적할당 경우 말고는 별도 작성 불필요
//		delete[] name;
//	}
//
//	void getData() const;
//};
//
//MyClass::MyClass(int n, const char* pstr, int n2) {	// 문자열 상수 : 주소라서 포인터변수로 받아야 함
//	id = n;
//	name = new char[strlen(pstr) + 1];		// 동적 할당
//	// name = pstr							// 배열 선언 후 대입 연산자를 사용하여 값을 직접 할당할 수 없음
//	strcpy(name, pstr);
//	//name = pstr;
//	age = n2;
//}
//
//void MyClass::getData() const{				// 상수 멤버함수(모든 멤버들을 상수화 시킴)
//											// const void void MyClass::getData() -> return값을 상수화
//	cout << "id: " << id << endl << "name: " << name << endl << "age: " << age << endl;
//	//id = 2; mutable 있을때 가능
//}
//
//int main()
//{
//	
//	MyClass obj(1, "호날두", 41);
//	obj.getData();
//
//	return 0;
//}