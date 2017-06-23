#include <iostream>
#include <cstdlib>
#include <pthread.h>


using namespace std;

#define NUM_THREADS 5

void *PrintNokia(void *threadid){
	long tid;
	tid=(long)threadid;
	cout << "Hi, I'm NOKIA ID " << tid << endl;
	pthread_exit(NULL);
}

int main(){
	pthread_t threads[NUM_THREADS];
	int rc;
	int i;

	for (i=0; i < NUM_THREADS; i++){
		cout << "Creating Nokia ID Threads, " << i << endl;

		rc=pthread_create(&threads[i], NULL, PrintNokia, (void *)i);

		if (rc){
			cout << "ErrorL unable to create NOKIA id thread, " << rc << endl;
			exit(-1);
		}

	}

	pthread_exit(NULL);
}