///*
//	����Ʈ ������ unique_ptr
//	��ü�� ���� �ֱ⸦ ��ü�� ����
//	�������� �޸� ���� �δ��� �ٿ���
//	unique_ptr - �������� ���������� �����ϴ� ����Ʈ ������(auto_ptr ��ü)
//*/
//#include <iostream>
//
//class MyClass {
//public:
//	MyClass() {
//		std::cout << "MyClass Constructor call" << std::endl;
//	}
//	~MyClass() {
//		std::cout << "MyClass Destructor call" << std::endl;
//	}
//};
//
//int main()
//{
//	std::unique_ptr<MyClass> ptr(new MyClass{});
//	std::unique_ptr<MyClass> ptr2 = move(ptr);		// ������ ����
//
//	return 0;
//}