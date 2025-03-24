///*
//	기본 자료형의 형변환으로 컴파일 타임에 타입 변환
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
//	ch = static_cast<char>(i);		// int -> char로 타입 변환
//	std::cout << ch << std::endl;
//	ch = (char)i;					// C 스타일
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