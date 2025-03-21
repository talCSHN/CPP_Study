//#include <iostream>
//
//class MyClass {
//private:
//	int x, y;
//public:
//	MyClass(int ax, int ay) : x(ax), y(ay) {
//		printf("Constructor call\n");
//	}
//	MyClass& add(const MyClass& other) {
//		printf("add() call\n");
//		x += other.x;
//		y += other.y;
//		return *this;
//	}
//	MyClass operator+(const MyClass& other) {
//		printf("+ overloading\n");
//		return MyClass(x + other.x, y + other.y);
//	}
//	MyClass operator+(const int num) {
//		printf("+ overloading2\n");
//		return MyClass(x + num, y + num);
//	}
//
//	void showMyClass() {
//		printf("x: %d, y: %d\n\n", x, y);
//	}
//};
//
//int main()
//{
//	MyClass obj(10, 20);
//	obj.showMyClass();
//	MyClass obj2(100, 200);
//	obj2.showMyClass();
//	std::cout << "++++++++++++++++++++++++++++++++++" << std::endl;
//	MyClass obj3 = obj.add(obj2);
//	obj3.showMyClass();
//	MyClass obj4 = obj.operator+(obj3);
//	obj4.showMyClass();
//
//	MyClass obj5 = obj4 + 100;
//	//MyClass obj5 = 100 + obj4;	// 안 됨
//	obj5.showMyClass();
//	return 0;
//}
//
//// 오버로딩 할 수 없는 연산자
//// ::, ., *, sizeof