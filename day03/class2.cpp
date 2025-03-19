///*
//	생성자 -> 클래스명과 이름이 동일. return 없음
//*/
//#include <iostream>
//using namespace std;
//
//class AClass {
//private:
//	int n1;
//	int n2;
//public:
//	AClass() {	// 디폴트 생성자
//
//	}
//	void setData(int num1, int num2) {
//		n1 = num1;
//		n2 = num2;
//	}
//
//	void getData() {
//		cout << "나는 AClass의 인스턴스입니다." << endl << "n1: " << n1 << endl << "n2: " << n2 << endl;
//	}
//};
//
//int main()
//{
//	AClass obj;
//	//AClass obj();
//	//AClass obj(100, 200); // 안 됨
//	obj.getData();
//	obj.setData(10, 20);
//	obj.getData();
//	return 0;
//}