///*
//	��� ���迡�� ��ü ���� �� �Ҹ�
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
//	��ü�� ������ �� ȣ��Ǵ� �����ڿ� �������� ������ �ٸ�
//	�� �������� ȣ��� �������� ������ �ٸ�
//*/