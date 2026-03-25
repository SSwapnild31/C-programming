#include<stdio.h>
#include<pthread>

void* task_helper(void* msg){
	cout <<"Task says : "<< msg << endl;
}

int main()
{
	pthread_t t;
	pthread_create(&t, NULL, task_helper, "Hello");
	
	t.join();

	cout <<"Main thread completed"<< endl;
	
	return 0;
}
