#include <iostream>
#define HAVE_STRUCT_TIMESPEC
#pragma comment(lib,"pthreadVC2.lib")
#include <pthread.h>
using namespace std;
#define NUM_THREADS 5
// 演示了如何通过结构传递多个参数。您可以在线程回调中传递任意的数据类型，因为它指向 void
void *print_hello(void *threadid) {
	int tid = *((int*)threadid);
	cout << "Hello! 线程ID, " << tid << endl;
	pthread_exit(NULL);
	return 0;
}
int main2() {
	pthread_t threads[NUM_THREADS];
	int indexes[NUM_THREADS];
	int rc;
	int i;
	for (i = 0; i < NUM_THREADS; i++) {
		cout << "main(): 创建线程，" << i << endl;
		indexes[i] = i;
		rc = pthread_create(&threads[i], NULL, print_hello, (void *)(indexes+i));
		if (rc) {
			cout << "error:无法创建线程，" << rc << endl;
			exit(-1);
		}
	}
	system("pause");
	pthread_exit(NULL);
}

