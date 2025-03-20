///*
//	StaticTest라는 클래스 생성.
//	  - 멤버 변수 : 이름, 전화번호, 주소, 회원번호(cnt)
//	  - 멤버 함수 : 3개 입력 가지는 생성자(회원번호는 자동으로 증가)
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
//		std::cout << "회원 번호: " << cnt << std::endl;
//		printf("이름: %s, 전화번호: %s, 주소: %s\n", name, phone, addr);
//	}
//};
//int StaticTest::cnt = 0;
//
//int main()
//{
//	StaticTest m1("호날두", "010-1111-1111", "알나스르");
//	m1.showMember();
//
//	StaticTest m2("메시", "010-8888-1616", "LA");
//	m2.showMember();
//
//	StaticTest m3("음바페", "010-3333-3333", "마드리드");
//	m3.showMember();
//	return 0;
//}