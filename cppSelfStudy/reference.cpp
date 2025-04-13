//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//	int num1 = 1020;
//	int& num2 = num1;
//
//	cout << num1 << endl;
//	cout << num2 << endl;
//
//	cout << &num1 << endl;
//	cout << &num2 << endl;
//
//	int num3 = 12;
//	int* ptr = &num3;
//	int** dptr = &ptr;
//
//	cout << **dptr << endl;
//
//	int& ref = num3;
//	int* (&pref) = ptr;	// &pref 주소값 == ptr주소값
//	int** (&dpref) = dptr;
//
//	return 0;
//}