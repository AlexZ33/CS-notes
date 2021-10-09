/*
 * @Author: your name
 * @Date: 2021-09-22 17:54:47
 * @LastEditTime: 2021-09-22 19:33:23
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /algorithm/leetcode/165. 比较版本号/compareVersion2.js
 */


/**
 *方法二：双指针
方法一需要存储分割后的修订号，为了优化空间复杂度，我们可以在分割版本号的同时解析出修订号进行比较。
 * 复杂度分析
* 时间复杂度：O(n+m)O(n+m)，其中 nn 是字符串 \textit{version1}version1 的长度，mm 是字符串 \textit{version2}version2 的长度。
* 空间复杂度：O(1)O(1)，我们只需要常数的空间保存若干变量。

链接：https://leetcode-cn.com/problems/compare-version-numbers/solution/bi-jiao-ban-ben-hao-by-leetcode-solution-k6wi/
来源：力扣（LeetCode）
 *
 * @param {*} version1
 * @param {*} version2
 * @return {*} 
 */
var compareVersion = function(version1, version2) {
    const n = version1.length, m = version2.length;
    let i = 0, j = 0;
    while (i < n || j < m) {
        let x = 0;
        for (; i < n && version1[i] !== '.'; ++i) {
            x = x * 10 + version1[i].charCodeAt() - '0'.charCodeAt();
        }
        ++i; // 跳过点号
        let y = 0;
        for (; j < m && version2.charAt(j) !== '.'; ++j) {
            y = y * 10 + version2[j].charCodeAt() - '0'.charCodeAt();
        }
        ++j; // 跳过点号
        if (x !== y) {
            return x > y ? 1 : -1;
        }
    }
    return 0;
}
