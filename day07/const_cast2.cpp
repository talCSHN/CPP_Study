///*
//	
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int num;
//public:
//	void setNum(int n) {
//		num = n;
//	}
//	void print() const {
//		std::cout << "Before: " << num;
//		const_cast<MyClass*>(this)->num--;
//		std::cout << "  After: " << num << std::endl;
//	}
//};
//
//int main()
//{
//	MyClass obj;
//	obj.setNum(10);
//	obj.print();
//	return 0;
//}