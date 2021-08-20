/*
 * @Author: your name
 * @Date: 2021-03-22 15:38:19
 * @LastEditTime: 2021-03-22 16:17:22
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edithttps://github.com/WangCao/Algorithms-4th-edition-for-js/blob/master/utils/index.js
 * @FilePath: /C/algorithm/剑指offer题解/Q7生成固定长度的数组/generateAandomArray.js
 */
/**
 * 生成固定长度随机数组
 */

function generateAandomArray(len = 1000) {
    let arr = [];
    for (let i = 0; i < len; i++) {
        arr.push(Math.round(Math.random() * len));
    }
    return arr;
}

moudle.exports = {
    generateAandomArray,
};
