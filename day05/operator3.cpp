///*
//	멤버함수 연산자 오버로딩: p1 operator연산자(p2) ex) p1 operator+(p2)
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int value;
//public:
//	MyClass(int num) : value(num) {
//		printf("Conversion Constructor call\n");
//	}
//
//	MyClass operator+(const MyClass& other) {		// operator overloading
//		printf("+ overloading\n");
//		return MyClass(value + other.value);
//	}
//
//	void showMyClass() {
//		printf("value: %d\n\n", value);
//	}
//};
//
//int main()
//{
//	MyClass obj(10);			// 변환생성자 호출. 초기값을 가지는 객체 생성
//	obj.showMyClass();
//
//	MyClass obj2(obj);			// default 복사생성자 호출. obj 복사해서 객체 생성
//	obj2.showMyClass();
//
//	MyClass obj3 = obj2;		// default 복사생성자 호출. obj 복사해서 객체 생성
//	obj3.showMyClass();
//
//	MyClass obj4 = obj + obj2 + obj3;	// 객체를 더한 결과를 가지고 객체 생성
//	//MyClass obj4 = obj.operator+(obj2);
//	//MyClass obj4 = (obj.operator+(obj2)).operator+(obj3);
//	obj4.showMyClass();
//
//	return 0;
//}