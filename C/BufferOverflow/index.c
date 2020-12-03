#include <stdio.h>   
int main()
{
    char buf[20];  //不要char*p，然后gets(p)，这是错误的，因为p没有指向有效的内存，它可能指向任何非法地址 ，造成非法访问异常                 
    gets(buf); // 注意ｇｅｔｓ函数已经被废弃
    printf("%s\n", buf);
    return 0;
}
