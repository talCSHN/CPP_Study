///*
//	StaticTest��� Ŭ���� ����.
//	  - ��� ���� : �̸�, ��ȭ��ȣ, �ּ�, ȸ����ȣ(cnt)
//	  - ��� �Լ� : 3�� �Է� ������ ������(ȸ����ȣ�� �ڵ����� ����)
//	  - showMember()
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class StaticTest {
//private:
//	char name[100];
//	char phone[100];
//	char addr[100];
//	static int cnt;
//public:
//	StaticTest(const char* str, const char* str2, const char* str3) {
//		strcpy(name, str);
//		strcpy(phone, str2);
//		strcpy(addr, str3);
//	}
//	void showMember() {
//		cnt++;
//		std::cout << "ȸ�� ��ȣ: " << cnt << std::endl;
//		printf("�̸�: %s, ��ȭ��ȣ: %s, �ּ�: %s\n", name, phone, addr);
//	}
//};
//int StaticTest::cnt = 0;
//
//int main()
//{
//	StaticTest m1("ȣ����", "010-1111-1111", "�˳�����");
//	m1.showMember();
//
//	StaticTest m2("�޽�", "010-8888-1616", "LA");
//	m2.showMember();
//
//	StaticTest m3("������", "010-3333-3333", "���帮��");
//	m3.showMember();
//	return 0;
//}