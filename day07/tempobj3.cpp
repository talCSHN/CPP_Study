///*
//*/
//#include <iostream>
//
//class MyClass {
////private: ���������� �����ϸ� �⺻������ private
//	int num;
//public:
//	MyClass(int n) : num(n) {
//		std::cout << this << " Constructor call" << std::endl;	// this : �ڱ����� ������
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
//	�ܼ�â ���
//	00000032D277F7B4 Constructor call
//	00000032D277F7B4 Destructor call
//	*/
//	MyClass obj2{ func(obj) };
//	/*
//	�ܼ�â ���
//	0000009D8BFDF514 Constructor call
//	0000009D8BFDF614 Copy Constructor call		// obj�� ���纻���� ���޵� -> MyClass aobj �κп��� ��������� ȣ��
//	func() call
//	0000009D8BFDF534 Copy Constructor call		// aobj�� return�Ǹ鼭 obj2�� ����� -> ��������� ȣ��
//	0000009D8BFDF614 Destructor call
//	0000009D8BFDF534 Destructor call
//	0000009D8BFDF514 Destructor call
//	*/
//	std::cout << "end" << std::endl;
//
//	return 0;
//}