//#include <iostream>
//
//class Time {
//private:
//	int hour;
//	int min;
//	int sec;
//public:
//	Time() {				// default Constructor
//
//	}
//	Time(int abssec) {		// Conversion Constructor
//		this->hour = abssec / 3600;
//		this->min = (abssec / 60) % 60;
//		this->sec = abssec % 60;
//	}
//	void printTime() {
//		printf("����ð��� %d�� %d�� %d��", this->hour, this->min, this->sec);
//	}
//};
//
//int main()
//{
//	//Time now(9999);
//	Time now = 9999;	// ���� ����
//	now.printTime();
//	return 0;
//}