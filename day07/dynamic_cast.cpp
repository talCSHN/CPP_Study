///*
//	기본 클래스를 참조하는 l-value를 
//	파생된 클래스에 대한 참조로 변환
//	상속관계에서 안전하게 형변환 지원
//	다운캐스팅의 경우 다형성을 위해서 virtual 메서드 반드시 필요
//*/
//#include <iostream>
//
//class Super {
//public:
//	int n1, n2;
//};
//
//class Sub : public Super {
//public:
//	int n3, n4;
//};
//
//class Sub2 : public Sub {
//public:
//	int n5, n6;
//};
//
//int main()
//{
//	Super* sp;
//	Sub* sbp;
//	Sub2* sbp2;
//	Sub2 obj{};
//
//	sbp2 = dynamic_cast<Sub2*>(&obj);
//	sbp = dynamic_cast<Sub*>(sbp2);			// 업캐스팅
//	sp = dynamic_cast<Super*>(sbp2);		// 업캐스팅
//
//
//	return 0;
//}