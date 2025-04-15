//#include <iostream>
//
//class AClass {
//public:
//	int value;
//	AClass(int v = 0) : value(v) {
//	
//	}
//
//	void showAClass() {
//		std::cout << "Dynamically created Object" << std::endl;
//	}
//};
//
//int main()
//{
//	AClass* ptr = new AClass(10);
//	ptr->showAClass();
//	delete ptr;
//
//	AClass obj;
//	ptr = &obj;
//
//	ptr->showAClass();
//	(*ptr).showAClass();
//
//	return 0;
//}