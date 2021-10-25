/*
 * @Author: your name
 * @Date: 2021-10-25 17:52:31
 * @LastEditTime: 2021-10-25 17:59:40
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /数组与指针/score.c
 */
// 一个学习小组有 5 个人，每个人有 3 门课程的考试成绩，求该小组各科的平均分和总平均分。

#include <stdio.h>

int main() {
    int i, j; // 二维数组下标
    int sum = 0; // 当前科目的总成绩
    int average; // 总平均分
    int v[3]; // 存放各科平均分
    int a[5][3]; // 用来保存每个同学各科成绩的二维数组

    printf("input score: \n");
    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            scanf("%d", &a[j][i]);  //输入每个同学的各科成绩
            sum += a[j][i];  //计算当前科目的总成绩
        }
        v[i]=sum/5;  // 当前科目的平均分
        sum=0;
    }
    average = (v[0] + v[1] + v[2]) / 3;
    printf("Math: %d\nC Languag: %d\nEnglish: %d\n", v[0], v[1], v[2]);
    printf("Total: %d\n", average);
    return 0;
}
