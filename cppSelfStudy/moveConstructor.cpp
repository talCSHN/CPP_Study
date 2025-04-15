//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//	char name[10];
//	int age;
//public:
//	Human(const char* name, int age) {
//		printf("Constructor call\n");
//		strcpy(this->name, name);
//		this->age = age;
//	}
//	Human(Human& other){
//		printf("Copy Constructor call\n");
//		strcpy(this->name, other.name);
//		this->age = other.age;
//
//	}
//
//	Human(Human&& other) noexcept {
//		printf("Move Constructor call\n");
//		strcpy(this->name, other.name);
//		this->age = other.age;
//
//		other.age = 0;
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
//	Human h2(std::move(h));
//	std::cout << &h2 << std::endl << &h << std::endl;
//	h2.showHuman();
//	h.showHuman();
//
//	return 0;
//}