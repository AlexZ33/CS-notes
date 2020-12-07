/*
 * @Author: AlexZ33
 * @Date: 2020-12-03 22:54:02
 * @LastEditTime: 2020-12-03 22:54:38
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C/game/2048/head.h
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <unistd.h>
#include<signal.h>
#include<time.h>

void draw(); // 用于绘制游戏界面
void play(); // 游戏运行的逻辑主体
void init(); // 初始化函数,用于完成一些必要的初始化操作
void draw_one(int y, int x); // 绘制单个数字
void cnt_value(int *new_y, int *new_x);
int game_over(); //结束游戏
int cnt_one(int y, int x);