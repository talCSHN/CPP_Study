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
//	//MyClass& obj2 = MyClass{ 20 };	 // �ӽð�ü�� ������ �� ����
//
//	MyClass obj = MyClass{ 10 };
//	obj.setData(20);
//
//	MyClass&& obj2 = MyClass{ 20 };		// �̵������� -> r-value ���� ����
//	obj2.setData(22);
//
//	const MyClass& obj3 = MyClass{ 30 };
//	//obj3.setData(33);		// const���� -> �� ���� �Ұ�
//
//	std::cout << "end" << std::endl;
//
//	return 0;
//}