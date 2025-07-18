#include <iostream>
#include <thread>
#include <mutex>
#include <windows.h>
#include <queue>
#include <chrono>
using namespace std;

// 생성자 - 소비자 패턴 // 모니터 파-탄

int sex = 0;

int main()
{
	queue<int> tasks;

	mutex sexMutex;
	// 생성자
	thread t1([&]() {
		int task = 0;
		for (int i = 0; i < 10; ++i)
		{
			unique_lock<mutex> sexLock(sexMutex);
			tasks.push(task++);
			//lock_guard<mutex> sexLock2(sexMutex); // 재귀 락 호출로 인한 데드락 발생
			sexLock.unlock();
			cout << "스레드임 -> " << task << endl;
		}
		});

	int task2 = 0;
	for (int i = 0; i < 10; ++i)
	{
		unique_lock<mutex> sexLock(sexMutex);
		tasks.push(task2++);
		sexLock.unlock();
		cout << "메인임 -> " << task2 << endl;
		this_thread::sleep_for(std::chrono::seconds(2));
	}
	int size = tasks.size();
	for (int i = 0; i < size; ++i)
	{
		cout << tasks.front() << endl;
		tasks.pop();
	}
	t1.join();
	return 0;
}