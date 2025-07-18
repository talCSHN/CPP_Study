#include <iostream>
#include <thread>
#include <mutex>
#include <windows.h>
using namespace std;
int sex = 0;

int main()
{
	mutex sexMutex;
	{


	}

	thread t1([&]() {
		for (int i = 0; i < 150; i++) 
		{
			unique_lock<mutex> sexLock(sexMutex);
			sex++;
			sexLock.unlock();

			// 오버헤드 존나큰작업
		}
	});
	
	int cnt = 10;
	while (0 <= cnt)
	{
		lock_guard<mutex> sexLock(sexMutex);
		--sex;
		--cnt;
		cout << sex;
	}
	t1.join();
	return 0;
}