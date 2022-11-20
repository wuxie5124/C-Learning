#include <iostream>

#define HAVE_STRUCT_TIMESPEC
#pragma comment(lib,"pthreadVC2.lib")
#include <pthread.h>
using namespace std;
#define NUM_THREAD 5
void *say_hello(void* args) {
	cout << "Hello Runoob" << endl;
	return 0;
}
int main1() {
	pthread_t tids[NUM_THREAD];
	for (int i = 0; i < NUM_THREAD; ++i) {
		int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
		if (ret != 0) {
			cout << "pthread_create error: error_code=" << ret << endl;
		}
	}
	system("pause");
	pthread_exit(NULL);
	return 0;
}
