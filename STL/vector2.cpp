///*
//*/
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//	cout << "[ v[i], v.size(), v.capacity() ]" << endl;
//	for (int i = 0; i <= 32; i++) {
//		v.push_back(i + 1);
//		cout << "[" << v[i] << ", " << v.size() << ", " << v.capacity() << "]" << endl;
//	}
//
//	vector<int> v2;
//	v2.push_back(10);
//	v2.push_back(11);
//	v2.push_back(12);
//	v2.push_back(13);
//	v2.insert(v2.begin(), 1);
//	v2.insert(find(v2.begin(), v2.end(), 13), 20);
//
//	for (auto i : v2) {
//		cout << i << endl;
//	}
//	return 0;
//
//	v2.pop_back();		// 마지막 원소 제거
//	
//	for (auto i : v2) {
//		cout << i << endl;
//	}
//	return 0;
//
//}
///*
//	v.push_back(10) : 마지막 원소 뒤에 10 추가
//	v.insert(idx, val) : idx번째 위치에 val 삽입
//	v.capacity() : vector에 할당된 메모리 크기 리턴 - v.size()와 다름
//*/