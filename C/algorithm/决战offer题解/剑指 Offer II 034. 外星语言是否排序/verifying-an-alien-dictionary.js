/*
 * @Author: your name
 * @Date: 2021-10-09 17:56:18
 * @LastEditTime: 2021-10-09 18:26:55
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /决战offer题解/剑指 Offer II 034. 外星语言是否排序/verifying-an-alien-dictionary.js
 */
/**
 * 使用对象存放字母排序，相邻单词进行顺序的验证
 * @param {string[]} words 单词
 * @param {string} order　str顺序
 * @return {boolean}
 */

var  isAlienSorted = function(words, order) {
    // 把给定的order str 变成hash表存储
    let obj = {}
    for (let i = 0; i < order.length; i++ ) {
        obj[order[i]] = i
    }
    for (let i=0; i < words.length-1; i++) {
        // 相邻单词
        let word1 = words[i]
        let word2 = words[i+1]
        let index = 0
        // 同时小于给定的单词长度
        while(index < word2.length && index < word1.length){
            console.log("word2[index]", word2[index])
            console.log("word1[index]", word2[index])
            console.log("obj[word2[index]]", obj[word2[index]])
            console.log("obj[word1[index]]", obj[word1[index]])
            if(obj[word2[index]] < obj[word1[index]]) return false
            else if(obj[word2[index]] > obj[word1[index]]) break
            else{
                index++
            }
        }
        if(index === word2.length && index !== word1.length) return false
    }
    return true
}

let words = ["apple","app"], order = "abcdefghijklmnopqrstuvwxyz"

isAlienSorted(words, order)