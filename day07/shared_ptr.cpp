///*
//	shared_ptr
//	make_shared : ��ü�� ���� ī��Ʈ�� �ϳ��� �޸� ���� ���� �Ҵ�. shared_ptr�� �����ϴ� �Լ�
//	shared_ptr�� ���� ī��Ʈ�� ���� ��ü�� ������ ����
//	�������� shared_ptr�� ��ü�� ������ �� ������ ���۷��� ī��Ʈ�� 0�� �Ǹ� �޸� �ڵ� ����
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
//		std::cout << "Siuuuuu shared_ptr" << std::endl;
//	}
//};
//
//int main()
//{
//	std::shared_ptr<MyClass> ptr = std::make_shared<MyClass>();
//	std::shared_ptr<MyClass> ptr2 = ptr;
//	printf("ptr�� ptr2�� ������ ��ü�� ����Ŵ(����)\n");
//
//	ptr2->func();
//	return 0;
//}