///*
//	weak_ptr : ���۷��� ī��Ʈ�� ������ �����ʴ� ����Ʈ ������
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
//	void func() {
//		std::cout << "Siuuuuuu weak_ptr" << std::endl;
//	}
//};
//
//int main()
//{
//	std::shared_ptr<MyClass> ptr = std::make_shared<MyClass>();		// C++14 ���ĺ��� ����
//	std::weak_ptr<MyClass> weakPtr = ptr;
//
//	// weak_ptr�� ��ȯ������ ����
//	std::shared_ptr<MyClass> ptr2 = weakPtr.lock();		// weak_ptr���� shared_ptr�� ��ȯ
//	if (ptr2) {
//		std::cout << "weak_ptr�� ��ȯ�� shared_ptr ��� ����" << std::endl;
//	}
//
//	return 0;
//}