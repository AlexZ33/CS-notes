/*
 * @Author: AlexZ33
 * @Date: 2020-12-07 
 * @LastEditTime: 2020-12-07
 * @LastEditors: Please set LastEditors
 * @Description: 讲解&运算符
 *  查看变量被存储在何处
 * @FilePath: /C/basic/数组与指针/&.c
 * @Reference 《C Primer Plus》第六版
 */

 #include<stdio.h>
 void mikado (int);   /* 函数原型*/
 int main(void) 
 {
     int pooh  =  2,  bah  =  5;  /*main()的局部变量*/

     printf("In main(), pooh =  %d  and &pooh =  %p \n ",  pooh,  &pooh);
     printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
     mikado(pooh);

     return 0;
 }

 void mikado(int bah)  /* 定义函数*/
 {
     int pooh = 10; /* mikado() 的局部变量*/

     printf("In mikado(), pooh =  % d and &pooh = %p\n", pooh, &pooh );
     printf("In mikado(),bah =  % d and &bah = %p\n", bah, &bah );

 }
