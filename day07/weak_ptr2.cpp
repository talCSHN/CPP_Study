///*
//	순환참조: 두 객체가 서로를 참조하고, 둘 다 shared_ptr을 사용하여 참조를 유지하는 경우 발생
//*/
//#include <iostream>
//
//struct B;
//struct A {
//	std::shared_ptr<B> b_ptr;
//};
//
//struct B {
//	//std::shared_ptr<A> a_ptr;		// 순환참조
//	std::weak_ptr<A> a_ptr;
//};
//
//int main()
//{
//	std::shared_ptr<A> a(new A());
//	std::shared_ptr<B> b(new B());
//
//	a->b_ptr = b;
//	b->a_ptr = a;
//
//	return 0;
//}