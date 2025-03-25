///*
//	vector container - 삽입, 삭제, 참조
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
//	v.push_back("호날두");
//	v.push_back("메시");
//	v.push_back("음바페");
//	v.push_back("벨링엄");
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
//		if (*iter == "메시") {
//			v.erase(iter);
//			break;
//		}
//		cout << *iter << " / ";
//	}
//	cout << endl;
//}
///*
//	iterator 타입 : iterator, begin(), end()
//	v.front() : 첫 번째 요소 리턴
//	v.back() : 마지막 요소 리턴
//*/