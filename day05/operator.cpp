//#include <iostream>
//
//class MyClass {
//private:
//	int m_a, m_b;
//	//const char* m_name;
//public:
//	MyClass(int num = 0, int num2 = 0 /*const char* str = nullptr*/) : m_a(num), m_b(num2)/*, m_name(str)*/ {
//		//m_a = num;
//		//m_b = num2;
//		////m_name = new char[strlen(str) + 1];
//		//strcpy(m_name, str);
//	}
//	void showMyClass() {
//		std::cout << m_a << ", " << m_b << ", " << /*m_name <<*/ std::endl;
//	}
//};
//
//int main()
//{
//	//MyClass obj{ 1, 2, "ȫ�浿" };
//	//obj.showMyClass();
//
//	//MyClass obj2;	// default ������ ���� ���� ȣ���Ϸ��� ���� �����ڿ��� �ʱⰪ �����
//	//obj2 = obj;		// num = 10; ����Ʈ ���� ������
//	//				// obj ��ü�� �ִ� ����������� �����ؼ� obj2 ����
//	//				// ������ �����ε� ����� �ֱ⶧���� ����
//	//obj2.showMyClass();
//
//	MyClass obj{ 10, 20 };
//	MyClass obj2{ 30, 40 };
//	MyClass obj3 = obj + obj2;	// �̰� �Ƿ��� +�����ڿ� ���� �����ε��� �ʿ���
//
//	return 0;
//}