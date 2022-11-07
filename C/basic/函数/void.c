/*
 * @Author: AlexZ33 775136985@qq.com
 * @Date: 2022-09-05 16:30:38
 * @LastEditors: AlexZ33 775136985@qq.com
 * @LastEditTime: 2022-09-05 16:38:07
 * @FilePath: /basic/函数/void.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<stdio.h>
int main() {
    void *p;

    // 使用它装一个整数
    int a = 3;
    p = &a;
    printf("%d", *(int*)p);

    // 使用它装一个字符串

    char  s[]="hello,world";
    p=s;
    printf("%p", p);
    return 0;
}