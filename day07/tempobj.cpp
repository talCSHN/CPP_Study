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
//	MyClass obj2 = MyClass{ 20 };		// MyClass{ 20 }�� �ӽð�ü
//	MyClass{ 30 };						// �ӽð�ü�� �����ϰų� �̵����� ������ ���� �࿡�� �ٷ� �Ҹ�
//
//	std::cout << "end" << std::endl;
//
//	return 0;
//}