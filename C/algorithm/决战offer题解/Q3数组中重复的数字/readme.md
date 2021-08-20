
#  题目描述
在一个长度为n的数组里的所有数字都在0到n-1的范围内。 数组中某些数字是重复的，但不知道有几个数字是重复的。也不知道每个数字重复几次。请找出数组中第一个重复的数字。 例如，如果输入长度为7的数组{2,3,1,0,2,5,3}，那么对应的输出是第一个重复的数字2。
# 返回描述：
如果数组中有重复的数字，函数返回true，否则返回false。
如果数组中有重复的数字，把重复的数字放到参数duplication[0]中。（ps:duplication已经初始化，可以直接赋值使用。）

# 解答
题目描述很不清晰，十分模糊：
"请找出数组中任意一个重复的数字。 例如，如果输入长度为7的数组{2,3,1,0,2,5,3}，那么对应的输出是第一个重复的数字2"
到底是随便找还是要第一个，描述的也太不严谨了，实测题目要求是随便找.

## Python实现

### 解法一：利用字典（哈希）

## Javascript实现

```javascript
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


```