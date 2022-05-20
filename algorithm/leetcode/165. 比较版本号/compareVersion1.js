/*
 * @Author: your name
 * @Date: 2021-09-22 17:28:24
 * @LastEditTime: 2021-09-22 17:54:08
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /algorithm/leetcode/165. 比较版本号/compareVersion.js
 */


/**
 *方法一：字符串分割
* 我们可以将版本号按照点号分割成修订号，然后从左到右比较两个版本号的相同下标的修订号。在比较修订号时，需要将字符串转换成整数进行比较。注意根据题目要求，如果版本号不存在某个下标处的修订号，则该修订号视为 00。

* 链接：https://leetcode-cn.com/problems/compare-version-numbers/solution/bi-jiao-ban-ben-hao-by-leetcode-solution-k6wi/
* 来源：力扣（LeetCode）
* 时间复杂度：O(n+m)O(n+m)（或 O(\max(n,m))O(max(n,m))，这是等价的），其中 nn 是字符串 \textit{version1}version1 的长度，mm 是字符串 \textit{version2}version2 的长度。
* 空间复杂度：O(n+m)O(n+m)，我们需要 O(n+m)O(n+m) 的空间存储分割后的修订号列表。
 * @param {*} version1
 * @param {*} version2
 * @return {*} 
 */
const compareVersion = function(version1, version2) {
    const v1 = version1.split('.')
    const v2 = version2.split('.')
    for (let i = 0; i < v1.length ||  v2.length; ++i) {
        let x = 0, y = 0;
        if (i < v1.length) {
            x = parseInt(v1[i])
        }
        if (i < v2.length) {
            y = parseInt(v2[i]);
        }

        if (x > y) {
            return 1;
        }
        if (x < y) {
            return -1;
        }
    }
    return 0;
}

