///*
//	객체를 더하는 함수: add()
//	참조를 리턴
//*/
//#include <iostream>
//
//class Point {
//private:
//	int x, y;
//public:
//	Point(int ax = 0, int ay = 0) : x(ax), y(ay) {
//		printf("Constructor call\n");
//	}
//	Point(const Point& other) {
//		printf("Copy Constructor call\n");
//		x = other.x;
//		y = other.y;
//	}
//	Point& add(const Point& other) {
//		printf("add() call\n");
//		//return Point(x + other.x, y + other.y);
//		// 참조를 통해 리턴
//		x += other.x;
//		y += other.y;
//		return *this;
//	}
//	void showPoint() {
//		printf("x: %d, y: %d", x, y);
//	}
//};
//
//int main()
//{
//	Point p(10, 20);
//	Point p2(100, 200);
//	std::cout << "++++++++++++++++++++++++++++++++++++" << std::endl;
//	/*Point p3;
//	p3 = p.add(p2);*/
//	Point p3 = p.add(p2);	// 객체를 선언하면서 기존 객체로 초기화할 경우 복사 생성자가 호출됨
//	p3.showPoint();
//	return 0;
//}