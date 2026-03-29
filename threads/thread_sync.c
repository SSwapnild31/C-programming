#include<stdio.h>
#include<pthread.h>

pthread_mutex_t mtx;
pthread_cond_t cond;
int turn = 0;

void *thread1(void *arg){
	char ch = 'a';

	for(int i=0;i<26;i++){
		pthread_mutex_lock(&mtx);
		
		while(turn != 0){
			pthread_cond_wait(&cond, &mtx);
		}
		
		printf("%c",ch++);
		fflush(stdout);
		
		turn = 1;
		pthread_cond_signal(&cond);
		pthread_mutex_unlock(&mtx);
	}
	return NULL;
}

void *thread2(void *arg){
	char ch = 'A';
	
	for(int i=0;i<26;i++){
		pthread_mutex_lock(&mtx);

		while(turn != 1){
			pthread_cond_wait(&cond, &mtx);
		}

		printf("%c ",ch++);
		fflush(stdout);
		
		turn = 0;
		pthread_cond_signal(&cond);
		pthread_mutex_unlock(&mtx);
	}
	return NULL;
}

int main()
{
	pthread_t t1, t2;

	pthread_mutex_init(&mtx, NULL);
	pthread_cond_init(&cond, NULL);

	pthread_create(&t1, NULL, thread1, NULL);
	pthread_create(&t2, NULL, thread2, NULL);
	
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	
	printf("\n");

	pthread_mutex_destroy(&mtx);
	pthread_cond_destroy(&cond);
	
	return 0;
}
