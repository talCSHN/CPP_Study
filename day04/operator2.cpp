#include <iostream>

class Point {
public:
	int x, y;
	Point(int ax = 0, int ay = 0) : x(ax), y(ay) {
		printf("Constructor call\n");
	}
	Point(const Point& other) {
		printf("Copy Constructor call\n");
		x = other.x;
		y = other.y;
	}
	void showPoint() {
		printf("x: %d, y: %d\n", x, y);
	}

	const Point& add(const Point& other) {
		printf("add() function call\n");
		return Point(x + other.x, y + other.y);
	}
};

int main()
{
	Point obj(10, 20);
	//obj.showPoint();
	Point obj2(300, 400);
	//obj2.showPoint();
	Point obj3;
	obj3 = obj.add(obj2);
	obj3.showPoint();
	Point obj4 = obj3;
	obj4.showPoint();

	return 0;
}