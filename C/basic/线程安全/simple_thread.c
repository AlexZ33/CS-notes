/*
 * @Author: AlexZ33 775136985@qq.com
 * @Date: 2022-09-05 15:56:11
 * @LastEditors: AlexZ33 775136985@qq.com
 * @LastEditTime: 2022-09-05 16:02:33
 * @FilePath: /basic/线程安全/simple_thread.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <pthread.h>
#include<stdio.h>
#include<unistd.h>

void *thread_function(void *arg) {
    printf("hello, world\n");
    sleep(10);
}

int main() {
     pthread_t thread;

  pthread_create(&thread, NULL, thread_function, NULL);
  pthread_join(thread, NULL);
}