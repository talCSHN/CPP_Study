///*
//	�⺻ Ŭ������ �����ϴ� l-value�� 
//	�Ļ��� Ŭ������ ���� ������ ��ȯ
//	��Ӱ��迡�� �����ϰ� ����ȯ ����
//	�ٿ�ĳ������ ��� �������� ���ؼ� virtual �޼��� �ݵ�� �ʿ�
//*/
//#include <iostream>
//
//class Super {
//public:
//	int n1, n2;
//};
//
//class Sub : public Super {
//public:
//	int n3, n4;
//};
//
//class Sub2 : public Sub {
//public:
//	int n5, n6;
//};
//
//int main()
//{
//	Super* sp;
//	Sub* sbp;
//	Sub2* sbp2;
//	Sub2 obj{};
//
//	sbp2 = dynamic_cast<Sub2*>(&obj);
//	sbp = dynamic_cast<Sub*>(sbp2);			// ��ĳ����
//	sp = dynamic_cast<Super*>(sbp2);		// ��ĳ����
//
//
//	return 0;
//}