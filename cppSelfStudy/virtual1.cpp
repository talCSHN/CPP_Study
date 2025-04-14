//#include <iostream>
//
//using namespace std;
//
//class Base {
//public:
//	void baseFunc() {
//		cout << "Base function" << endl;
//	}
//};
//class Derived : public Base {
//public:
//	void derivedFunc() {
//		cout << "Derived fucntion" << endl;
//	}
//};
//
//int main()
//{
//	Base* bptr = new Derived();
//	//bptr->derivedFunc();  // 안 됨
//	//Derived dptr = bptr;	// 안 됨
//	Derived* dptr = new Derived();
//	Base* bptr = dptr;	// 이건 됨
//
//
//	return 0;
//}