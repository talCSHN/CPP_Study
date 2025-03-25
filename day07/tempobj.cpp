//#include <iostream>
//
//class MyClass {
//private:
//	int num;
//public:
//	MyClass(int n) : num(n) {
//		std::cout << num << " Constructor call" << std::endl;
//	}
//	~MyClass() {
//		std::cout << num <<" Destructor call" << std::endl;
//	}
//};
//
//int main()
//{
//	MyClass obj{ 10 };
//	MyClass obj2 = MyClass{ 20 };		// MyClass{ 20 }은 임시객체
//	MyClass{ 30 };						// 임시객체는 복사하거나 이동하지 않으면 다음 행에서 바로 소멸
//
//	std::cout << "end" << std::endl;
//
//	return 0;
//}