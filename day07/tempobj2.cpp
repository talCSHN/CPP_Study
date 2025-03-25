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
//		std::cout << num << " Destructor call" << std::endl;
//	}
//	void setData(int n) {
//		num = n;
//	}
//};
//
//int main()
//{
//	//MyClass* ptr = &MyClass{ 10 };
//	//MyClass& obj2 = MyClass{ 20 };	 // 임시객체는 참조할 수 없음
//
//	MyClass obj = MyClass{ 10 };
//	obj.setData(20);
//
//	MyClass&& obj2 = MyClass{ 20 };		// 이동생성자 -> r-value 참조 가능
//	obj2.setData(22);
//
//	const MyClass& obj3 = MyClass{ 30 };
//	//obj3.setData(33);		// const참조 -> 값 수정 불가
//
//	std::cout << "end" << std::endl;
//
//	return 0;
//}