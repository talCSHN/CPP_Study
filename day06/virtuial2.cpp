//
////	Virtual Class - ���� �����ڸ� ������ �޼��带 ���� ���� �Լ���� ��
////  ���� ���� �Լ��� ������ Ŭ���� : �߻� Ŭ����
////  �߻� Ŭ������ ��ü ���� �Ұ�
//
//#include <iostream>
//
//class Cinterface {
//public:
//	Cinterface() {
//		std::cout << "CInterface Constructor call\n" << std::endl;
//	}
//	virtual void getData() const = 0;		// ���� ���� �Լ�
//};
//
//class CinSub : public Cinterface {
//public:
//	CinSub() {
//		std::cout << "CinSub Constructor call\n" << std::endl;
//	}
//	void getData() const override {
//		std::cout << "Pure Virtual function()" << std::endl;
//	}
//};
//
//int main()
//{
//	// Cinterface obj;		// �߻�Ŭ������ ��ü ���� �Ұ�
//	CinSub obj;
//	std::cout << "+++++++++++++++++++++++++++++++" << std::endl;
//	obj.getData();
//	return 0;
//}