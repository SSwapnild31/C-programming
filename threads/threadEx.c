#include<stdio.h>
#include<pthread.h>

void* task_helper(void* msg){
	printf("Task says : %s\n",(char*)msg);
}

int main()
{
	const char* msg = "Hello from main";
	pthread_t t;

	pthread_create(&t, NULL, task_helper,(void*)msg);
	
	pthread_join(t, NULL);

	printf("Main thread completed\n");
	
	return 0;
}
