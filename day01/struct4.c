//#include <stdio.h>
//
//struct profile {
//	int age;
//	double height;
//	double weight;
//};
//
//struct student {
//	struct profile pf;
//	int id;
//	double grade;
//};
//
//int main()
//{
//	struct student s;
//
//	s.grade = 4.5;
//	s.id = 201511326;
//	s.pf.age = 31;
//	s.pf.height = 173;
//	s.pf.weight = 90;
//
//	printf("Ű: %.1lf\n", s.pf.height);
//	printf("������: %.1lf\n", s.pf.weight);
//	printf("����: %d\n", s.pf.age);
//	printf("����: %.1lf\n", s.grade);
//	printf("�й�: %d\n", s.id);
//	return 0;
//}