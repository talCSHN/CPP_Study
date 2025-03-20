///*
//	이동 생성자(T&&)
//	r-value reference를 파라미터로 갖는 이동 생성자
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//	char name[10];
//	int age;
//public:
//	// 입력 2개 받는 생성자
//	Human(const char* name, int age) {
//		printf("Constructor(2 parameters) call\n");
//		strcpy(this->name, name);
//		this->age = age;
//	}
//	// 복사 생성자
//	Human(const Human& other) {
//		printf("Copy Constructor call\n");
//		strcpy(this->name, other.name);
//		this->age = other.age;
//	}
//	// 이동 생성자
//	Human(Human&& other) noexcept{		// 원본 객체를 복사 x. 원본 객체의 값들이 이동생성자로 전달됨. 복사생성보다 속도가 빠름
//										// 값 이동 중 예외발생 방지하기 위해 noexcept 사용해야 함
//		printf("Move Constructor call\n");
//		strcpy(this->name, other.name);
//		this->age = other.age;
//		
//		
//		other.age = 0; // 임시객체에 0 넣음
//	}
//	void showHuman() {
//		printf("name: %s, age: %d\n\n", this->name, this->age);
//	}
//};
//
//int main()
//{
//	Human h("호날두", 31);
//	h.showHuman();
//
//	Human h1(h);
//	h1.showHuman();
//
//	Human h2(std::move(h));		// 이동 생성자 호출
//	h2.showHuman();
//	h.showHuman();
//	return 0;
//}