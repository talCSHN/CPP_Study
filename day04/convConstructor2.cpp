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
//		printf("현재시간은 %d시 %d분 %d초", this->hour, this->min, this->sec);
//	}
//};
//
//int main()
//{
//	//Time now(9999);
//	Time now = 9999;	// 위와 동일
//	now.printTime();
//	return 0;
//}