///*
//	�⺻ �ڷ����� ����ȯ���� ������ Ÿ�ӿ� Ÿ�� ��ȯ
//*/
//#include <iostream>
//
//int main()
//{
//	char ch;
//	int i = 100;
//	float f = 3.14;
//	double d = 2.345;
//
//	ch = static_cast<char>(i);		// int -> char�� Ÿ�� ��ȯ
//	std::cout << ch << std::endl;
//	ch = (char)i;					// C ��Ÿ��
//	std::cout << ch << std::endl;
//
//	d = static_cast<double>(f);
//	std::cout << d << std::endl;
//
//	i = static_cast<int>(d);
//	std::cout << i << std::endl;
//
//	std::cout << typeid(ch).name() << std::endl;
//	std::cout << typeid(d).name() << std::endl;
//	std::cout << typeid(i).name() << std::endl;
//
//	return 0;
//}
///*
//	static_cast<type-id>(expression)
//*/