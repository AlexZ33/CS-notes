/*
 * @Author: your name
 * @Date: 2021-10-18 14:27:14
 * @LastEditTime: 2021-10-18 14:42:56
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /algorithm/leetcode/5. 最长回文子串/longestPalindrome.js
 */
/**
 * @param {string} s
 * @return {string}
 */
 var longestPalindrome = function (s) {
    // 方法2：dp，用时O(n^2)击败26.85%，内存O(n^2)击败4.98%
    // dp[i][j]表示i到j是否为回文
    const len = s.length;
    // dp[i][i]为true
    const dp = new Array(len).fill(0).map(i=>new Array(len).fill(true));

    // 1、计算0-1,1-2,2-3开始
    // 2、计算0-2，1-3，2-4
    // 3、计算0-3，1-4，2-5
    // ...以此类推
    for(let i=1;i<len;i++) {
        for(let j=0;i+j<len;j++) {
            console.log("1111111111", dp)
            console.log("2222222222", i+j)
            dp[j][i+j] = (s[j] === s[i+j]) && dp[j+1][i+j-1];
        }
    }

    // 接下来再遍历一遍，依次求dp[i]的最大回文子串
    let maxstr = "";
    for(let i=0;i<len;i++) {
        var maxIndex = dp[i].lastIndexOf(true);
        // 如果以i为启点的最大回文子串长度>maxstr，则替换maxstr;
        if(maxIndex-i+1>maxstr.length) {
            maxstr = s.substring(i,maxIndex+1);
        }
    }
    console.log(maxstr)
    return maxstr;

};

let  s = "ababs"

longestPalindrome(s)
