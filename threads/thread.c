#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void* print_message_function(void *ptr){
	char *msg;

	msg = (char*)ptr;

	printf("In thread : %s\n", msg);
	pthread_exit(NULL);	//explicitly terminate the thread
}

int main()
{
	pthread_t thread1;
	const char *msg = "Hello from the new thread!";
	int ret;
	
	ret = pthread_create(&thread1, NULL, print_message_function,(char*)msg);
	
	if(ret){
		fprintf(stderr,"Error creating thread : %d\n",ret);
		return 1;
	}
	
	printf("Hello from main thread!\n");

	//wait for new thread to finish
	pthread_join(thread1, NULL);

	printf("New thread finished. Main thread exiting.\n");
	return 0;
}
