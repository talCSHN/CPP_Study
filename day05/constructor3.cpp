///*
//	��ü�� ���ϴ� �Լ�: add()
//	������ ����
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
//		// ������ ���� ����
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
//	Point p3 = p.add(p2);	// ��ü�� �����ϸ鼭 ���� ��ü�� �ʱ�ȭ�� ��� ���� �����ڰ� ȣ���
//	p3.showPoint();
//	return 0;
//}