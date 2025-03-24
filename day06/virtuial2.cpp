//
////	Virtual Class - 순수 지정자를 가지는 메서드를 순수 가상 함수라과 함
////  순수 가상 함수를 가지는 클래스 : 추상 클래스
////  추상 클래스는 객체 생성 불가
//
//#include <iostream>
//
//class Cinterface {
//public:
//	Cinterface() {
//		std::cout << "CInterface Constructor call\n" << std::endl;
//	}
//	virtual void getData() const = 0;		// 순수 가상 함수
//};
//
//class CinSub : public Cinterface {
//public:
//	CinSub() {
//		std::cout << "CinSub Constructor call\n" << std::endl;
//	}
//	void getData() const override {
//		std::cout << "Pure Virtual function()" << std::endl;
//	}
//};
//
//int main()
//{
//	// Cinterface obj;		// 추상클래스는 객체 생성 불가
//	CinSub obj;
//	std::cout << "+++++++++++++++++++++++++++++++" << std::endl;
//	obj.getData();
//	return 0;
//}