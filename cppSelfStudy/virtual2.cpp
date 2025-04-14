//#include <iostream>
//
//using namespace std;
//
//class First {
//public:
//	virtual void MyFunc() {
//		cout << "First function" << endl;
//	}
//};
//class Second : public First {
//public:
//	virtual void MyFunc() {
//		cout << "Second function" << endl;
//	}
//};
//class Third : public Second {
//public:
//	virtual void MyFunc() {
//		cout << "Third function" << endl;
//	}
//};
//
//int main()
//{
//	Third* tptr = new Third();
//	Second* sptr = tptr;
//	First* fptr = sptr;
//
//	fptr->MyFunc();
//	sptr->MyFunc();
//	tptr->MyFunc();
//	delete tptr;
//
//	return 0;
//}