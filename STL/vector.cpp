///*
//   STL(Standard Template Library)
//   container : 객체를 저장하고 관리하는 자료 구조
//   컨테이너 종류
//	  1. 시퀀스 컨테이너   - 선형적으로 데이터 저장(순서). vector, list, queue...
//	  2. 연관 컨테이너   - 일정한 규칙으로 저장. set, multiset, map, multimap...
//	  3. 컨테이너 어댑터   - 변형
//*/
///*
//	vector
//*/
//#include <iostream>
//#include <vector>		// vector  헤더파일
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
//	for (auto i : v3) {				// 향상된 for문. 범위기반 for문
//									// v3의 요소값들을 하나씩 i에 집어넣음
//									// 첫번째 반복문 - v3의 첫번째값 1이 i에 들어감
//									// -> v3[1]출력
//		//cout << v3[i] << endl;	// 따라서 향상된 for문 - 인덱스 사용 불가
//		cout << i << endl;
//	}
//
//	// begin()과 end()는 iterator(반복자) 타입을 반환(포인터)
//	cout << "v3의 첫 번째 요소값: " << *v3.begin() << endl;
//	cout << "v3의 마지막 요소값: " << *(v3.end() - 1) << endl;	// end()는 마지막 요소 다음을 반환하므로 -1 해줘야함
//
//	return 0;
//}
///*
//	vector.size();	- 원소 크기(갯수) 반환
//	vector.begin();	- vector 첫번째 주소 반환
//	vector.end();	- vector 마지막 주소의 다음 주소를 반환
//*/