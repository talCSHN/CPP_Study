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
//template <>					// Ŭ���� ���ø��� Ư��ȭ
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
//	CTest<int> obj(10);		// Ŭ���� ���ø��� �ݵ�� �ν��Ͻ� ���� �� typename�� �ۼ��ؾ� ��
//	std::cout << obj.getData() << std::endl;
//	CTest<char> obj2('a');
//	std::cout << obj2.getData() << std::endl;
//	return 0;
//}