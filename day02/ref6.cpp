///*
//	���۷����� ���
//*/
//#include <iostream>
//
//int& func(int& ref) {
//	ref++;
//	return ref;		// lvalue�� ����
//	//return ref++;	// rvalue�� ���� �Ұ�
//}
//
//int&& func1(int& ref) {	// && : rvalue ����
//	ref++;
//	//return ref;
//	return ref++;
//}
//
//int main()
//{
//	int n = 10;
//	int& ref = func(n);
//	//int ref = func(n);	// �Ϲ� ������ �޴� �͵� ����
//	std::cout << ref << std::endl;
//	return 0;
//}