///*
//	dynamic_cast�� �̿��Ͽ� �ٿ�ĳ���� �� �����Լ� �ݵ�� �ʿ�
//*/
//#include <iostream>
//
//class Super {
//public:
//	virtual void func() {
//		std::cout << "Super::func()" << std::endl;
//	}
//	void func1() {
//		std::cout << "Super::func1()" << std::endl;
//	}
//	void fx() {
//		std::cout << "Super::fx()" << std::endl;
//	}
//};
//
//class Sub : public Super {
//public:
//	void func() {
//		std::cout << "Sub::func()" << std::endl;
//	}
//	void func2() {
//		std::cout << "Sub::func2()" << std::endl;
//	}
//	void fx() {
//		std::cout << "Sub::fx()" << std::endl;
//	}
//};
//
//int main()
//{
//	Super* sp = new Super{};
//	sp->func();
//	sp->func1();
//	sp->fx();
//	std::cout << "+++++++++++++++++++++++Upcasting+++++++++++++++++++++++++" << std::endl;
//	Super* sp2 = new Sub{};
//	sp2->func();
//	sp2->func1();
//	sp2->fx();
//	//sp2->func2;	Super Ŭ������ ����Լ��� ȣ�� ����
//	std::cout << "+++++++++++++++++++++++Downcasting+++++++++++++++++++++++++" << std::endl;
//	Sub* sp3 = dynamic_cast<Sub*>(sp2);		// downcasting �� virtual �Լ��� �ݵ�� �־�� ��
//	sp3->func();
//	sp3->func1();
//	sp3->func2();
//	sp3->fx();
//
//	delete sp;
//	delete sp2;
//
//	return 0;
//}