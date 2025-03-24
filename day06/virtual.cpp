///*
//	virtual function : �Ļ�Ŭ�������� �������� ���� ��ӹ��� ��� �Լ�
//	Base Ŭ������ ��� �Լ��� virtual Ű���带 ����Ͽ� ����
//	virtual table ���������, dynamic binding���� ����
//*/
//#include <iostream>
//
//class Base {
//public:
//	virtual void func1() {							// ���� �Լ�
//		std::cout << "Base::func1()" << std::endl;
//	}
//	virtual void func2() {							// ���� �Լ�
//		std::cout << "Base::func2()" << std::endl;
//	}
//	void func3() {
//		std::cout << "Base::func3()" << std::endl;
//	}
//};
//
//class Derived : public Base {
//	void func1() override {							// �����Լ��� �������ϴ� ����Լ� ��Ÿ��
//		std::cout << "Derived::func1()" << std::endl;	
//	}
//	void func3() {
//		std::cout << "Derived::func2()" << std::endl;
//	}
//	void func4() {
//		std::cout << "Derived::func4()" << std::endl;
//	}
//};
//
//int main()
//{
//	Base b;
//	Derived d;
//	Base* bptr = new Derived();	// upcasting
//
//	bptr->func1();				// base Ŭ������ func1()�� �����Լ��� ����Ǿ� Derived Ŭ������ func1()�� ȣ��	
//	bptr->func2();				// base Ŭ������ func1()�� �����Լ��� ����Ǿ����� �������̵�(������) ���� �ʾ���. �θ�Ŭ������ �Լ��� ȣ���
//	bptr->func3();				// ������ Ÿ���� ȣ�� �Լ��� ������
//	//bptr->func4();
//
//	delete bptr;
//	bptr = &b;
//	bptr->func1();
//	bptr->func2();
//	bptr->func3();
//
//	return 0
//
//}
//
///* ��ü �������� ���������� ���� Ŭ���� Ÿ���� �����ͷ� �Ļ� Ŭ���� ��ü ��Ű���� ������ ���� Ŭ���� ����� ����
//   �� �� �������̵� �� �Ļ�Ŭ������ ����� ����ϱ� ���ؼ��� ���� Ŭ������ ��� �Լ��� �����Լ��� ����� ��
//   �̰��� ������ �� ������������ ���ε����� ���ϰ� ��Ÿ�ӿ��� �����Ͱ� � ��ü�� ����Ű�� �ִ����� ���� ���ε� �Լ� ����*/