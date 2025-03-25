////
////	reinterpret_cast
////	포인터->포인터, 포인터->변수, 변수->포인터로 하는 주로 포인터 관련 연산자
//#include <iostream>
//
//int main()
//{
//	int* ip = new int{ 10 };
//	long lg = reinterpret_cast<long>(ip);			// int* -> long으로 변환
//	unsigned int ui = reinterpret_cast<int>(ip);	// int* -> unsigned int로 변환
//	printf("ip: %u, lg: %u, ui: %u\n", ip, lg, ui);
//
//	//int* p = reinterpret_cast<int*>(lg);
//	/*int* p1 = reinterpret_cast<int*>(ui);			// 64bit 환경에서는 실행 안 됨. 32bit 환경에서는 가능
//	printf("p: %d, p1: %d\n", *p1);*/
//
//	int* p = new int{ 100 };
//	char* pc = reinterpret_cast<char*>(p);
//	printf("pc: %d\n", *pc);							// int* -> char*
//
//	p = reinterpret_cast<int*>(pc);						// char* -> int*
//	printf("p: %d\n", *p);
//
//	return 0;
//}