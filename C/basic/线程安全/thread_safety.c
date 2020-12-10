/*
 * @Author: AlexZ33
 * @Date: 2020-12-09 20:28:58
 * @LastEditTime: 2020-12-09 20:42:23
 * @LastEditors: Please set LastEditors
 * @Description:经典的多线程不安全代码
 * @FilePath: /C/basic/线程安全/threadSafety.c
 */
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
static int counter = 0;
#define LOOPS 10000000 /*注意
之所以这里的 LOOPS 选用了一个比较大的数 “10000000” ,是为了保证第一个线程不
要在第二个线程开始执行前就退出了。大家可以根据自己的运行环境来修改这个数值。*/
 static void *thread(void *unused)
 {
     int i;
     for (i = 0; i < LOOPS; ++i) {
         ++counter;
     }
     return NULL;
 }
 int main(void)
 {
    pthread_t t1, t2;
    pthread_create(&t1, NULL, thread, NULL);
    pthread_create(&t2, NULL, thread, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    printf("Counter is %d by threads\n", counter);
    return 0;
 }
