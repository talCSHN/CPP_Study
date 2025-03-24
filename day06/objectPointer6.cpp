///*
//	자식 포인터로 부모 객체를 가리킬(다운캐스팅) 수 없음
//*/
//#include <iostream>
//
//class Base {
//public:
//	void show() {
//		printf("Base Class");
//	}
//};
//
//class Derived : public Base {
//public:
//	void show() {
//		printf("Derived Class");
//	}
//};
//
//int main()
//{
//	Base bobj;
//	Derived* dptr = nullptr;
//	//dptr = &bobj;
//	/*dptr = (Base*)& bobj;
//	dptr->show();*/
//
//	dptr = (Derived*)&bobj;
//	dptr->show();
//	return 0;
//}