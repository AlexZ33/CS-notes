/*
 * @Author: your name
 * @Date: 2020-12-09 20:45:12
 * @LastEditTime: 2020-12-09 20:45:28
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C/basic/producerConsumerSemExample.c
 */
#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#define N 10
#define LOOPS 20
/* Lock */
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
/* counts empty buffer slots */
sem_t empty;
/* counts full buffer slots */
sem_t full;
/* shared data */
char buffer[N];
int result = 0, idx = 0;
/* Threads to run */
void producer(void);
void consumer(void);
int main(int argc, char *argv[])
{
pthread_t t1, t2;
sem_init(&empty,0,N); sem_init(&full, 0, 0);
pthread_create(&t1, NULL,
(void *)producer , (void *) NULL);
pthread_create(&t2, NULL,
(void *)consumer , (void *) NULL);
pthread_join(t1,NULL);
pthread_join(t2,NULL);
printf("Result = %d\n", result);
return 0;
}