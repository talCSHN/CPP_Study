//#include <iostream>
//using namespace std;
//
//void swap(int* ptr1, int* ptr2) {
//	int temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//}
//
//void swap(char* ptr1, char* ptr2) {
//	char temp[100];
//	strcpy_s(temp, 100, ptr1);
//	strcpy_s(ptr1, 100, ptr2);
//	strcpy_s(ptr2, 100, temp);
//	cout << "+++++++++++++" << *ptr1 << endl;
//
//}
//
//void swap1(char** ptr1, char** ptr2) {
//
//	char* temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//}
//
//int main() {
//
//	int a = 3;
//	int b = 5;
//	
//	swap(&a, &b);
//	cout << a << b << endl;
//
//	char ch1[100] = "cppStudy";
//	char ch2[100] = "difficult";
//	swap(ch1, ch2);
//	cout << ch1 << ch2 << endl;
//
//	char* ch3 = (char*)"cppStudy";	// 원래 "cppStudy"는 const char* 타입이므로 (char*)로 바꿔줘야함
//	char* ch4 = (char*)"difficult";
//	cout << ch3 << endl;
//	swap1(&ch3, &ch4);
//	cout << ch3 << ch4 << endl;
//
//	return 0;
//}