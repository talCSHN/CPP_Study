///*
//*/
//#include <iostream>
//
//class MyClass {
////private: 접근제어자 생략하면 기본적으로 private
//	int num;
//public:
//	MyClass(int n) : num(n) {
//		std::cout << this << " Constructor call" << std::endl;	// this : 자기참조 포인터
//	}
//	MyClass(const MyClass& other) : num(other.num) {
//		std::cout << this << " Copy Constructor call" << std::endl;
//	}
//	~MyClass() {
//		std::cout << this << " Destructor call" << std::endl;
//	}
//	void setData(int n) {
//		num = n;
//	}
//};
////MyClass func(MyClass aobj) {
////	std::cout << "func() call" << std::endl;
////	return aobj;
////}
//MyClass func(const MyClass& aobj) {
//	std::cout << "func() call" << std::endl;
//	return aobj;
//}
//
//int main()
//{
//	MyClass obj{ 10 };
//	/*
//	콘솔창 결과
//	00000032D277F7B4 Constructor call
//	00000032D277F7B4 Destructor call
//	*/
//	MyClass obj2{ func(obj) };
//	/*
//	콘솔창 결과
//	0000009D8BFDF514 Constructor call
//	0000009D8BFDF614 Copy Constructor call		// obj가 복사본으로 전달됨 -> MyClass aobj 부분에서 복사생성자 호출
//	func() call
//	0000009D8BFDF534 Copy Constructor call		// aobj가 return되면서 obj2로 복사됨 -> 복사생성자 호출
//	0000009D8BFDF614 Destructor call
//	0000009D8BFDF534 Destructor call
//	0000009D8BFDF514 Destructor call
//	*/
//	std::cout << "end" << std::endl;
//
//	return 0;
//}