///*
//	�߻� �ڷ��� �̿��ؼ� ���� �Ҵ�� ��ü�� ������ ����
//	�޸� ���� �� ���� Ÿ���� �Ҹ��ڸ� ȣ��Ǿ� �޸� ���� �߻�
//	���� Ŭ������ �Ҹ��ڸ� �������� ����� ��Ÿ���� �Ҹ��ڵ� ȣ���ؾ� ��
//*/
//#include <iostream>
//
//class CTest {
//private:
//	int num;
//public:
//	CTest(int anum) : num(anum) {
//		std::cout << num << ", " << "CTest Constructor call" << std::endl;
//	}
//	virtual ~CTest() {		// ���� �Ҹ���.
//		std::cout << num << ", " << "CTest Destructor call" << std::endl;
//	}
//	virtual void vfunc() {
//		std::cout << "CTest virtual function()" << std::endl;
//	}
//	void func() {
//		std::cout << "CTest function()" << std::endl;
//	}
//};
//
//class CTestSub : public CTest {
//private:
//	int subN;
//public:
//	CTestSub(int n1, int n2) : CTest(n1), subN(n2) {
//		std::cout << subN << ", " << "CTestSub Constructor call" << std::endl;
//	}
//	~CTestSub() {
//		std::cout << "+++++++++++++++++++++++++++++++++++++++++" << std::endl;
//		std::cout << subN << ", " << "CTestSub Destructor call" << std::endl;
//	}
//	void vfunc() override {
//		std::cout << "CTestSub function() override" << std::endl;
//	}
//};
//
//int main()
//{
//	CTest obj(1);
//	std::cout << "+++++++++++++++++++++++++++++++++++++++++" << std::endl;
//	
//	CTestSub obj2(2, 22);
//	std::cout << "+++++++++++++++++++++++++++++++++++++++++" << std::endl;
//	
//	obj.func();
//	obj.vfunc();
//	std::cout << "+++++++++++++++++++++++++++++++++++++++++" << std::endl;
//	
//	obj2.func();
//	obj2.vfunc();
//	std::cout << "+++++++++++++++++++++++++++++++++++++++++" << std::endl;
//	
//	CTest* ptr = new CTestSub(3, 33);
//	delete ptr;		// ���� �Ҹ��� ������ �θ� ��ü �Ҹ��ڸ� �����(3 CTest Destructor call). �ڽ� ��ü �Ҹ��ڴ� ���� �� ��
//	
//
//	return 0;
//}