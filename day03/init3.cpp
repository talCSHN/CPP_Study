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
//		cout << "�⺻ ������ ȣ��" << endl;
//	}
//	CTime(int a, int b, int c) : m_hour(a), m_min(b), m_sec(c)	// �ݷ� �ʱ�ȭ, initializer list
//																// �Ʒ� �޼��� ���ۺκ��� ����Ǳ� ���� �ʱ�ȭ���� �̷����
//	{
//		cout << "�Է� 3�� �޴� ������ ȣ��" << endl;
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
//		printf("���� �ð��� %d:%d:%d �Դϴ�.\n", m_hour, m_min, m_sec);
//	}
//};
//
//int main()
//{
//	//CTime now;
//	CTime now = CTime();	// CTime now;�� ����
//	now.showTime();
//	
//	//CTime t(15, 30, 30);
//	//CTime t = { 12, 12, 12 };
//	CTime t{ 12, 12, 12 };
//	t.showTime();
//
//	return 0;
//}