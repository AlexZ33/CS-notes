/*
 * @Author: AlexZ33
 * @Date: 2021-02-03
 * @LastEditTime: 2021-02-03 14:09:40
 * @LastEditors: Please set LastEditors
 * @Description: https://www.nowcoder.com/practice/00de97733b8e4f97a3fb5c680ee10720?tpId=13&tPage=3&rp=3&ru=%2Fta%2Fcoding-interviews&qru=%2Fta%2Fcoding-interviews%2Fquestion-ranking&tab=answerKey
 * @FilePath: /CS-notes/C/algorithm/剑指offer题解/Q1字符流中第一个不重复的字符/firstAppearingOnce.js
 */
let str;
//Init module if you need
function Init() {
    // write code here
    str = '';
}
//Insert one char from stringstream
function Insert(ch) {
    // write code here
    str += ch;
}
//return the first appearence once char in current stringstream
function FirstAppearingOnce() {
    // write code here
    for (let i = 0; i < str.length; i++) {
        if (str.indexOf(str[i]) === str.lastIndexOf(str[i])) return str[i];
    }
    return '#';
}

module.exports = {
    Init: Init,
    Insert: Insert,
    FirstAppearingOnce: FirstAppearingOnce,
};
