///*
//	변환 생성자(Conversion Constructor)
//	다른 타입의 객체로 변환될 때 호출되는 생성자. 매개변수(입력)를 한 개만 가지는 생성자
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int value;
//public:
//	MyClass(int value) {
//		printf("Conversion Constructor call\n");
//		this->value = value;
//	}
//	void printMyClass() {
//		printf("value: %d\n\n", this->value);
//	}
//};
//
//int main()
//{
//	MyClass obj = 10;	// int형의 객체 10이 MyClass타입으로 변환
//	obj.printMyClass();
//
//	MyClass obj2(10);
//	obj2.printMyClass();
//	return 0;
//}