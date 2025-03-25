/*
*/
#include <iostream>
#include <vector>
using namespace std;

void main()
{
	vector<int> v = { 10, 20, 30, 40, 50 };

	vector<int>::reverse_iterator rit;
	for (rit = v.rbegin(); rit != v.rend(); rit++) {
		cout << *rit << endl;
	}
	cout << endl;

	for (auto rit = v.rbegin(); rit != v.rend(); rit++) {
		cout << *rit << endl;
	}
	cout << endl;

}
/*
	vector<int>::reverse_iterator rit - ������ �ݺ��� ����
	�̰��� �����ϰ� auto�� ���� ����
	rbegin() - ������ �ּ� ��ȯ
	rend() - ó�� ������ ���� �ּ� ��ȯ
*/