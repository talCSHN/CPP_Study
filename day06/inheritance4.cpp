///*
//	상속 관계에서 객체 생성 및 소멸
//*/
//#include <iostream>
//
//class SuperClass {
//private:
//	int num;
//public:
//	SuperClass(int anum) {
//		num = anum;
//		std::cout << num << ", " << "SuperClass Constructor Call" << std::endl;
//	}
//	~SuperClass() {
//		std::cout << num << ", " << "SuperClass Destructor Call" << std::endl;
//	}
//};
//
//class SubClass : public SuperClass {
//private:
//	int subNum;
//public:
//	SubClass(int anum, int asnum) : SuperClass(anum) {
//		subNum = asnum;
//		std::cout << subNum << ", " << "SubClass Constructor Call" << std::endl;
//	}
//	~SubClass() {
//		std::cout << subNum << ", " << "SubClass Destructor Call" << std::endl;
//	}
//};
//
//int main()
//{
//	SuperClass s{ 1 };
//	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
//	SubClass sub{ 2, 22 };
//	return 0;
//}
///*
//	객체를 생성할 때 호출되는 생성자와 생성자의 실행은 다름
//	즉 생성자의 호출과 생성자의 실행은 다름
//*/