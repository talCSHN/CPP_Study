////
////	reinterpret_cast
////	������->������, ������->����, ����->�����ͷ� �ϴ� �ַ� ������ ���� ������
//#include <iostream>
//
//int main()
//{
//	int* ip = new int{ 10 };
//	long lg = reinterpret_cast<long>(ip);			// int* -> long���� ��ȯ
//	unsigned int ui = reinterpret_cast<int>(ip);	// int* -> unsigned int�� ��ȯ
//	printf("ip: %u, lg: %u, ui: %u\n", ip, lg, ui);
//
//	//int* p = reinterpret_cast<int*>(lg);
//	/*int* p1 = reinterpret_cast<int*>(ui);			// 64bit ȯ�濡���� ���� �� ��. 32bit ȯ�濡���� ����
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