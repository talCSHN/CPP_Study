///*
//	vector container - ����, ����, ����
//*/
//#include <iostream>
//#include <vector>
//#include <list>
//using namespace std;
//
//void main()
//{
//	vector<string> v;
//	list<int> li;
//
//	v.push_back("ȣ����");
//	v.push_back("�޽�");
//	v.push_back("������");
//	v.push_back("������");
//
//	cout << "v.front() : " << v.front() << endl;
//	cout << "v.back() : " << v.back() << endl;
//	cout << "v.capacity() : " << v.capacity() << endl;
//	cout << endl;
//
//	vector<string>::iterator iter;
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << " / ";
//	}
//	cout << endl;
//
//	v.pop_back();
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << " / ";
//	}
//	cout << endl;
//
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		if (*iter == "�޽�") {
//			v.erase(iter);
//			break;
//		}
//		cout << *iter << " / ";
//	}
//	cout << endl;
//}
///*
//	iterator Ÿ�� : iterator, begin(), end()
//	v.front() : ù ��° ��� ����
//	v.back() : ������ ��� ����
//*/