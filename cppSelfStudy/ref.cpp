//#include <iostream>
//
//using namespace std;
//
//int& func(int& ref) {
//	ref++;
//	//return ref++;
//	return ref;
//}
//
//int&& func1(int& ref) {
//	ref++;
//	//return ref;
//	return ref++;
//}
//
//int main()
//{
//	int n = 10;
//	//int& ref = func(n);
//	int&& ref = func1(n);
//	cout << ref << endl;
//
//	return 0;
//}