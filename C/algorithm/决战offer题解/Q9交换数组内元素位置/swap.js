/*
 * @Author: your name
 * @Date: 2021-03-22 15:51:50
 * @LastEditTime: 2021-03-22 16:17:36
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C/algorithm/决战offer题解/Q9交换数组内元素位置/swap.js
 */
function swap(arr, i, k) {
    let a = arr[i];
    arr[i] = arr[k];
    arr[k] = a;
}
moudle.exports = {
    swap,
};
