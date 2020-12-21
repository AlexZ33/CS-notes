/*
 * @Author:     AlexZ33
 * @Date: 2020-12-21 
 * @LastEditTime: 2020-12-21 17:32:45
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /CS-notes/C/basic/文件IO/open.c
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main(void)
{
    int fd = open("test_open.txt", O_CREAT, 0644, "test");
    close(fd);
    return 0;
}
