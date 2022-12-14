#include <iostream>
#include <cstdlib>
#define HAVE_STRUCT_TIMESPEC
#pragma comment(lib,"pthreadVC2.lib")
#include <pthread.h>

using namespace std;
#define NUM_THREADS 5
struct thread_data {
	int thread_ID;
	char *message;
};


void *PrintHello(void* threadarg){
	struct thread_data *my_data;
	my_data = (struct thread_data *)threadarg;
	cout << "Thread ID: " << my_data->thread_ID;
	cout << "Thread message " << my_data->message << endl;
	pthread_exit(NULL);
	return 0;
}

int main3() {
	pthread_t threads[NUM_THREADS];
	struct thread_data td[NUM_THREADS];
	int rc;
	int i;
	for (i = 0; i < NUM_THREADS; i++) {
		cout << "main(): creating thread, " << i << endl;
		td[i].thread_ID = i;
		td[i].message = (char *)"This is message";
		rc = pthread_create(threads+i, NULL, PrintHello, (void *)(td + i));
		if (rc) {
			cout << "Error: unable to create thread," << rc << endl;
			exit(-1);
		}
	}
	system("pause");
	pthread_exit(NULL);
	return 0;
}