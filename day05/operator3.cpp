///*
//	����Լ� ������ �����ε�: p1 operator������(p2) ex) p1 operator+(p2)
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int value;
//public:
//	MyClass(int num) : value(num) {
//		printf("Conversion Constructor call\n");
//	}
//
//	MyClass operator+(const MyClass& other) {		// operator overloading
//		printf("+ overloading\n");
//		return MyClass(value + other.value);
//	}
//
//	void showMyClass() {
//		printf("value: %d\n\n", value);
//	}
//};
//
//int main()
//{
//	MyClass obj(10);			// ��ȯ������ ȣ��. �ʱⰪ�� ������ ��ü ����
//	obj.showMyClass();
//
//	MyClass obj2(obj);			// default ��������� ȣ��. obj �����ؼ� ��ü ����
//	obj2.showMyClass();
//
//	MyClass obj3 = obj2;		// default ��������� ȣ��. obj �����ؼ� ��ü ����
//	obj3.showMyClass();
//
//	MyClass obj4 = obj + obj2 + obj3;	// ��ü�� ���� ����� ������ ��ü ����
//	//MyClass obj4 = obj.operator+(obj2);
//	//MyClass obj4 = (obj.operator+(obj2)).operator+(obj3);
//	obj4.showMyClass();
//
//	return 0;
//}