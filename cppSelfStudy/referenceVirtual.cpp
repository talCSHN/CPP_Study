//#include <iostream>
//
//using namespace std;
//
//class First {
//public:
//	void firstFunc() {
//		cout << "First function" << endl;
//	}
//	virtual void simpleFunc() {
//		cout << "Fisrt simpleFunc" << endl;
//	}
//};
//class Second : public First {
//public:
//	void secondFunc() {
//		cout << "Second function" << endl;
//	}
//	virtual void simpleFunc() {
//		cout << "Second simpleFunc" << endl;
//	}
//};
//class Third : public Second {
//public:
//	void thirdFunc() {
//		cout << "Third function" << endl;
//	}
//	virtual void simpleFunc() {
//		cout << "Third simpleFunc" << endl;
//	}
//};
//
//int main()
//{
//	Third obj;
//	obj.firstFunc();
//	obj.secondFunc();
//	obj.thirdFunc();
//	obj.simpleFunc();
//
//	Second& sref = obj;
//	//cout << &sref << endl;
//	sref.firstFunc();
//	sref.secondFunc();
//	//sref.thirdFunc(); // 불가
//	sref.simpleFunc();
//
//	First& fref = obj;
//	fref.firstFunc();
//	fref.simpleFunc();
//
//	return 0;
//}