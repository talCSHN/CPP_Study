//#include <iostream>
//
//template <typename T>
//class CTest {
//private:
//	T num;
//public:
//	CTest(T n) : num(n) {
//
//	}
//
//	T getData() {
//		return num;
//	}
//};
//template <>					// 클래스 템플릿의 특수화
//class CTest<char> {
//private:
//	char data;
//public:
//	CTest(char d) : data(d) {
//
//	}
//	char getData() {
//		return data;
//	}
//};
//int main()
//{
//	CTest<int> obj(10);		// 클래스 템플릿은 반드시 인스턴스 생성 시 typename을 작성해야 함
//	std::cout << obj.getData() << std::endl;
//	CTest<char> obj2('a');
//	std::cout << obj2.getData() << std::endl;
//	return 0;
//}