/*
 * @Author: your name
 * @Date: 2021-02-03 14:21:10
 * @LastEditTime: 2021-02-03 14:21:18
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /CS-notes/C/algorithm/剑指offer题解/Q2表示数值的字符串/isNumeric.js
 */
//s字符串
function isNumeric(s) {
    // write code here
    var reg = new RegExp(/^[\+-]?\d*\.?\d*(e[\+-]?\d+)?$/i);
    return reg.test(s);
}
module.exports = {
    isNumeric: isNumeric,
};
