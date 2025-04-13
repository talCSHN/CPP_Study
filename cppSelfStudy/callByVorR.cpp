//#include <iostream>
//using namespace std;
//
//void swapByValue(int num1, int num2) {
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//}
//
//void swapByRef(int* ptr1, int* ptr2) {
//	int temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//}
//
//void swapByRef2(int& ref1, int& ref2) {
//	int temp = ref1;
//	ref1 = ref2;
//	ref2 = temp;
//}
//
//int main() {
//
//	int val1 = 10;
//	int val2 = 20;
//
//	swapByValue(val1, val2);
//	cout << val1 << endl;
//	cout << val2 << endl;
//
//	swapByRef(&val1, &val2);
//	cout << "+++++++++++++" << val1 << endl;
//	cout << "+++++++++++++" << val2 << endl;
//
//	swapByRef2(val1, val2);
//	cout << "--------------" << val1 << endl;
//	cout << "--------------" << val2 << endl;
//
//	return 0;
//}