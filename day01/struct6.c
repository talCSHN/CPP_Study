///*
//
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//typedef struct vision {
//	double left;
//	double right;
//
//	//void move() {};	// ��� �Լ�
//}Vision;
//
//Vision exchange(Vision);	// �Լ� ����
//
//int main()
//{
//	Vision rot;
//	printf("�÷� �Է� : ");
//	scanf("%lf %lf", &(rot.left), &(rot.right));
//	rot = exchange(rot);
//	printf("�ٲ� �÷� : %.1lf, %.1lf\n", rot.left, rot.right);
//	return 0;
//}
//
//Vision exchange(Vision rot) {
//	double tmp = rot.left;
//	rot.left = rot.right;
//	rot.right = tmp;
//	return rot;
//}