///*
//	암묵적인 변환 방지 - explicit
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int value;
//public:
//	explicit MyClass(int value) {
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
//	//MyClass obj = 10;		// 에러
//	//obj.printMyClass();
//
//	MyClass obj2(10);		// 에러 없음
//	obj2.printMyClass();
//	return 0;
//}