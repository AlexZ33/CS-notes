#! https://zhuanlan.zhihu.com/p/420730399
<!--
 * @Author: your name
 * @Date: 2021-10-12 19:57:16
 * @LastEditTime: 2021-10-12 20:05:56
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /algorithm/leetcode/178. 分数排名/readme.md
-->
# 题目
![](./score_sort.png
)

# 题解

```
# Write your MySQL query statement below

SELECT Score,  
dense_rank() over (order by Score desc) as 'Rank'
FROM Scores
```

这题太老了，新版本有rank函数了

[dense_rank()](https://www.begtut.com/mysql/mysql-dense_rank-function.html)

