///*
//* 레퍼런스 - 선언과 동시에 초기화해야함.
//*/
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num = 10, num2 = 100;
//	int& ref = num;				// num의 메모리 공간에 ref라는 별명이 붙음.
//	int* pn = &num;				// 포인터 선언
//	int& rref = ref;
//	rref = num2;
//	cout << rref << ", " << num2 << endl;
//	//int& rref;				// 10열과 같이 초기화 하여야 함
//	//rref = ref;
//
//	num++;
//	ref++;
//	(*pn)++;
//
//	cout << "num++: " << num << endl;
//	cout << "ref++: " << ref << endl;
//	cout << "*(pn)++: " << *pn << endl;
//
//	cout << "&num: " << &num << endl;			//아래줄과 동일한 주소값을 가짐
//	cout << "&ref: " << &ref << endl;
//	return 0;
//}