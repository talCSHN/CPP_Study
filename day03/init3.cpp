//#include <iostream>
//using namespace std;
//
//class CTime {
//private:
//	int m_hour{ 0 };
//	int m_min{ 0 };
//	int m_sec{ 0 };
//public:
//	CTime() {
//		cout << "기본 생성자 호출" << endl;
//	}
//	CTime(int a, int b, int c) : m_hour(a), m_min(b), m_sec(c)	// 콜론 초기화, initializer list
//																// 아래 메서드 동작부분이 실행되기 전에 초기화부터 이루어짐
//	{
//		cout << "입력 3개 받는 생성자 호출" << endl;
//		// m_hour = a;
//		// m_min = b;
//		// m_sec = c;
//	}
//	void setTime(int hour, int min, int sec) {
//		m_hour = hour;
//		m_min = min;
//		m_sec = sec;
//	}
//	void showTime() const {
//		printf("현재 시간은 %d:%d:%d 입니다.\n", m_hour, m_min, m_sec);
//	}
//};
//
//int main()
//{
//	//CTime now;
//	CTime now = CTime();	// CTime now;와 동일
//	now.showTime();
//	
//	//CTime t(15, 30, 30);
//	//CTime t = { 12, 12, 12 };
//	CTime t{ 12, 12, 12 };
//	t.showTime();
//
//	return 0;
//}