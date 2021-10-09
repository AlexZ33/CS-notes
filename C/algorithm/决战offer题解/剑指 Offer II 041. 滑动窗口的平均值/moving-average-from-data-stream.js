/*
 * @Author: your name
 * @Date: 2021-10-09 11:41:25
 * @LastEditTime: 2021-10-09 14:34:49
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /algorithm/决战offer题解/剑指 Offer II 041. 滑动窗口的平均值/moving-average-from-data-stream.js
 */

/**
 * Initialize your data structure here.
 * @param {number} size   用窗口大小 size 初始化对象
 */
 var MovingAverage = function(size) {
    // 数组模拟队列, 添加的值
    this.nums = [];
    // 初始化的时候使用者会告诉队列中窗口最大的长度size
    this.capacity = size;
    // 用来记录和的值
    this.sum =0;
};

/** 
 * @param {number} val
 * @return {number} 成员函数 next 每次调用的时候都会往滑动窗口增加一个整数，请计算并返回数据流中最后 size 个值的移动平均值，即滑动窗口里所有数字的平均值。
 */
MovingAverage.prototype.next = function(val) {
    // 当窗口没满的时候，把元素加入队列同时sum中记录和值即可，
    this.nums.push(val);
    this.sum+= val;
    // 当窗口满了的时候，把队首元素出队列，同时更新sum中的值（出队列的元素需从sum中减去）
    if(this.nums.length > this.capacity) {
        this.sum -=this.nums.shift()
    }
    // 根据题意“计算滑动窗口里所有数字的平均值”，所以是用sum/窗口大小
    return this.sum / this.nums.length;
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * var obj = new MovingAverage(size)
 * var param_1 = obj.next(val)
 */