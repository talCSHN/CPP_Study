///*
//   STL(Standard Template Library)
//   container : ��ü�� �����ϰ� �����ϴ� �ڷ� ����
//   �����̳� ����
//	  1. ������ �����̳�   - ���������� ������ ����(����). vector, list, queue...
//	  2. ���� �����̳�   - ������ ��Ģ���� ����. set, multiset, map, multimap...
//	  3. �����̳� �����   - ����
//*/
///*
//	vector
//*/
//#include <iostream>
//#include <vector>		// vector  �������
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//	vector<int> v1{ 10 };
//	vector<int> v2( 10 );
//	vector<int> v3 = { 1, 2, 3, 4, 5 };
//
//	cout << "v size: " << v.size() << endl;
//	cout << "v1 size: " << v1.size() << endl;
//	cout << "v2 size: " << v2.size() << endl;
//	cout << "v3 size: " << v3.size() << endl;
//
//	for (int i = 0; i < 5; i++) {
//		printf("v3[%d]: %d    ", i, v3[i]);
//	}
//	cout << endl;
//
//	for (auto i : v3) {				// ���� for��. ������� for��
//									// v3�� ��Ұ����� �ϳ��� i�� �������
//									// ù��° �ݺ��� - v3�� ù��°�� 1�� i�� ��
//									// -> v3[1]���
//		//cout << v3[i] << endl;	// ���� ���� for�� - �ε��� ��� �Ұ�
//		cout << i << endl;
//	}
//
//	// begin()�� end()�� iterator(�ݺ���) Ÿ���� ��ȯ(������)
//	cout << "v3�� ù ��° ��Ұ�: " << *v3.begin() << endl;
//	cout << "v3�� ������ ��Ұ�: " << *(v3.end() - 1) << endl;	// end()�� ������ ��� ������ ��ȯ�ϹǷ� -1 �������
//
//	return 0;
//}
///*
//	vector.size();	- ���� ũ��(����) ��ȯ
//	vector.begin();	- vector ù��° �ּ� ��ȯ
//	vector.end();	- vector ������ �ּ��� ���� �ּҸ� ��ȯ
//*/