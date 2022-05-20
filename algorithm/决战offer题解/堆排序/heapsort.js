/*
 * @Author: your name
 * @Date: 2021-08-31 19:29:48
 * @LastEditTime: 2021-08-31 19:56:56
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /CS-notes/C/algorithm/决战offer题解/堆排序/heapsort.js
 */


/**
 * @description: 下沉操作
 * @param {array} arr  待调整的堆
 * @param {number} root 要下沉的父节点
 * @param {number}  len  堆的有效大小 
 */
const dowAdjust = (arr, root, len) => {
    const max = arr[root] // 
    let left = root * 2 + 1 // 其左子树坐标
    while (left < len) {
        // 比较左右子树，　取最大的那个节点
        if (left +1 < len && arr[left+1] > arr[left]) {
            // 右子树
            left++
        }
    }
}

const  heapSort = (arr, len = arr.length) => {
    for (let i = Math.floor(len-2/2); i >=0; i--) {
        dowAdjust(arr, i, len)
    }
}