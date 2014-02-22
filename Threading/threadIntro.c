/*
 * threadIntro.c
 *
 *  Created on: Feb 22, 2014
 *      Author: marknorton
 */


#include <stdio.h>
#include <pthread.h>

#define NUMTHRDS 2

pthread_t t [ NUMTHRDS];


static void *thread2(void *_){
	printf("Thread 2: flipped coin %d\n", coin_flip);
}


static void * thread1(void * _)
{

	coin_flip = 23;
	printf("Thread 1: flipped coin %d\n", coin_flip);
}

int main()
{
	/**
	 * You have no idea what order initial threads will be done with first
	 *
	 */
	pthread_create(&t[1], NULL, thread2, NULL);
	pthread_create(&t[0], NULL, thread1, NULL);


	//must have this as main will block until all the supported threads are done
	pthread_exit(NULL);


	return 1;
}


