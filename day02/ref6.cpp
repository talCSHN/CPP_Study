///*
//	레퍼런스를 출력
//*/
//#include <iostream>
//
//int& func(int& ref) {
//	ref++;
//	return ref;		// lvalue라서 가능
//	//return ref++;	// rvalue는 참조 불가
//}
//
//int&& func1(int& ref) {	// && : rvalue 참조
//	ref++;
//	//return ref;
//	return ref++;
//}
//
//int main()
//{
//	int n = 10;
//	int& ref = func(n);
//	//int ref = func(n);	// 일반 변수로 받는 것도 가능
//	std::cout << ref << std::endl;
//	return 0;
//}