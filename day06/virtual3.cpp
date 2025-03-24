///*
//	추상 자료형 이용해서 동적 할당된 객체를 참조할 때는
//	메모리 해제 시 참조 타입의 소멸자만 호출되어 메모리 누수 발생
//	상위 클래스의 소멸자를 가상으로 만들어 실타입의 소멸자도 호출해야 함
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
//	virtual ~CTest() {		// 가상 소멸자.
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
//	delete ptr;		// 가상 소멸자 없으면 부모 객체 소멸자만 실행됨(3 CTest Destructor call). 자식 객체 소멸자는 실행 안 됨
//	
//
//	return 0;
//}