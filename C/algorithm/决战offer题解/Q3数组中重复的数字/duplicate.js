/*
 * @Author: AlexZ33
 * @Date: 2021-01-26
 * @LastEditTime: 2021-01-26
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /CS-notes/C/algorithm/剑指offer题解/Q3数组中重复的数字/duplicate.js
 */

function duplicate(numbers, duplication) {
  for(let i = 0; i < numbers.length; i++) {
    if(numbers.lastIndexOf(numbers[i]) !== i) {
        duplication[0] = numbers[i]
      return true
    }
  }
  return false
}

module.exports = {
  duplicate:duplicate
}

//测试用例

let b = []
const a = duplicate([2,3,1,0,2,5,3], b)
console.log(a)

