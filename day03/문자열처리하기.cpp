///*
//	문자열 처리하기
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char str[20] = "홍길동";
//	cout << str << endl;
//
//	char str2[20];
//	//str2 = "호날두";	// 주소값에 값을 할당하고 있기때문에 안 됨
//	strcpy(str2, "호날두");
//	cout << str2 << endl;
//
//	//char* str3;	// 입력값을 저장할 공간이 없어서 안됨. new 써야함
//	char str3[100];
//	//string str3;
//	cout << "이름 입력 >> ";
//	cin >> str3;
//	cout << str3 << endl;
//
//	char* str4;
//	str4 = new char[strlen(str) + 1];
//	cout << "이름 입력 >> ";
//	cin >> str4;
//	cout << str4 << endl;
//
//	const char* name;
//	name = "메시";
//	cout << name << endl;
//
//	return 0;
//}