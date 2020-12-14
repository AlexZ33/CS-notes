/*
 * @Author:AlexZ33
 * @Date: 2020-12-10
 * @LastEditTime: 2020-12-11 16:30:39
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C/basic/可重入函数/signal_mutex.c
 */

 /*
 从字面上理解,可重入就是可重复进入。在编程领域,它不仅仅意味着可以重复进入,还要求在
进入后能成功执行。这里的重复进入,是指当前进程已经处于该函数中,这时程序会允许当前进程的
某个执行流程再次进入该函数,而不会引发问题。这里的执行流程不仅仅包括多线程,还包括信号处
理、 longjump 等执行流程。所以,可重入函数一定是线程安全的,而线程安全函数则不一定是可重入函
数。
从以上定义来看,很难说出哪些函数是可重入函数,但是可以很明显看出哪些函数是不可以重入
的函数。当函数使用锁的时候,尤其是互斥锁的时候,该函数是不可重入的,否则会造成死锁。若函
数使用了静态变量,并且其工作依赖于这个静态变量时,该函数也是不可重入的,否则会造成该函数
工作不正常。
下面来看一个死锁的例子代码如下:
 */
#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<signal.h>
#include<sys/types.h>

static pthread mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
static const char * const caller[2] = {""}