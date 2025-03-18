///*
//	디폴트 매개변수 여러 개 적용할 때는 맨 오른쪽부터 순서대로 작성
//*/
//#include <iostream>
//int coordinates(int x, int y = 0, int z = 0); // default 값은 함수 원형에만 작성
//int main()
//{
//	std::cout << "(10, 20, 30) : " << coordinates(10, 20, 30) << std::endl;
//	std::cout << "(10, 20, def) : " << coordinates(10, 20) << std::endl;
//	std::cout << "(10, 20, def) : " << coordinates(10) << std::endl;
//	return 0;
//}
//
//int coordinates(int x, int y, int z) {
//
//	int res;
//	res = pow(x, 2) + pow(y, 2) + pow(z, 2);	// 제곱
//	return sqrt(res);	// 제곱근
//}