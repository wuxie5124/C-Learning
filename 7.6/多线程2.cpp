#include <iostream>
#define HAVE_STRUCT_TIMESPEC
#pragma comment(lib,"pthreadVC2.lib")
#include <pthread.h>
using namespace std;
#define NUM_THREADS 5
// ��ʾ�����ͨ���ṹ���ݶ�����������������̻߳ص��д���������������ͣ���Ϊ��ָ�� void
void *print_hello(void *threadid) {
	int tid = *((int*)threadid);
	cout << "Hello! �߳�ID, " << tid << endl;
	pthread_exit(NULL);
	return 0;
}
int main2() {
	pthread_t threads[NUM_THREADS];
	int indexes[NUM_THREADS];
	int rc;
	int i;
	for (i = 0; i < NUM_THREADS; i++) {
		cout << "main(): �����̣߳�" << i << endl;
		indexes[i] = i;
		rc = pthread_create(&threads[i], NULL, print_hello, (void *)(indexes+i));
		if (rc) {
			cout << "error:�޷������̣߳�" << rc << endl;
			exit(-1);
		}
	}
	system("pause");
	pthread_exit(NULL);
}

