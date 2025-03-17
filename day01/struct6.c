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
//	//void move() {};	// 멤버 함수
//}Vision;
//
//Vision exchange(Vision);	// 함수 원형
//
//int main()
//{
//	Vision rot;
//	printf("시력 입력 : ");
//	scanf("%lf %lf", &(rot.left), &(rot.right));
//	rot = exchange(rot);
//	printf("바뀐 시력 : %.1lf, %.1lf\n", rot.left, rot.right);
//	return 0;
//}
//
//Vision exchange(Vision rot) {
//	double tmp = rot.left;
//	rot.left = rot.right;
//	rot.right = tmp;
//	return rot;
//}