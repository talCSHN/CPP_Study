///*
//	�Ϲ����� ��ȯ ���� - explicit
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int value;
//public:
//	explicit MyClass(int value) {
//		printf("Conversion Constructor call\n");
//		this->value = value;
//	}
//	void printMyClass() {
//		printf("value: %d\n\n", this->value);
//	}
//};
//
//int main()
//{
//	//MyClass obj = 10;		// ����
//	//obj.printMyClass();
//
//	MyClass obj2(10);		// ���� ����
//	obj2.printMyClass();
//	return 0;
//}