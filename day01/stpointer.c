///*
//	����ü ������:
//*/
//#include <stdio.h>
//
//typedef struct score {
//	int kor;
//	int eng;
//	int mat;
//} Score;
//
//int main()
//{
//	Score s = { 100, 80, 85 };
//	Score* ps = &s;
//
//	printf("���� : %d\n", ps->kor);
//	printf("���� : %d\n", ps->eng);
//	printf("���� : %d\n", ps->mat);
//	//printf("���� : %d\n", *(ps.mat));	// �ּҿ� .(������ٿ�����) ���°� �ȵ�
//	printf("���� : %d\n", (*ps).mat);	// �̷��� �ؾ���
//	return 0;
//}
///*
//	����ü ������ ���ؼ� ����� �����ϴ� ��� : .(������� ������)
//	����ü �����͸� ���ؼ� ����� �����ϴ� ��� : ->(arrow ������)
//*/